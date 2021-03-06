#include <m_pd.h>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cassert>
using std::min;
using std::max;

//------------------------------------------------------------------------------
struct t_dsp_object;
static void dsp_object_link_control(t_dsp_object *x, const char *name, float *zone);

//------------------------------------------------------------------------------
class dsp {
public:
    virtual ~dsp() {}
    virtual void init(int samplingFreq) = 0;
    virtual void instanceClear() = 0;
    virtual void compute(int count, float** inputs, float** outputs) = 0;
};

class UI {
    t_dsp_object *x_;

public:
    explicit UI(t_dsp_object *x) : x_(x) {}

    void declare(float *, const char *, const char *) {}
    void openFrameBox(const char *) {}
    void openTabBox(const char *) {}
    void openHorizontalBox(const char *) {}
    void openVerticalBox(const char *) {}
    void closeBox() {}

    void addNumDisplay(const char *, float *, int) {}
    void addTextDisplay(const char *, float *, char *[], float, float) {}
    void addHorizontalBargraph(const char *, float *, float, float) {}
    void addVerticalBargraph(const char *, float *, float, float) {}

    void addButton(const char *label, float *zone)
        { dsp_object_link_control(x_, label, zone); }
    void addToggleButton(const char *label, float *zone)
        { dsp_object_link_control(x_, label, zone); }
    void addCheckButton(const char *label, float *zone)
        { dsp_object_link_control(x_, label, zone); }
    void addVerticalSlider(const char *label, float *zone, float, float, float, float)
        { dsp_object_link_control(x_, label, zone); }
    void addHorizontalSlider(const char *label, float *zone, float, float, float, float)
        { dsp_object_link_control(x_, label, zone); }
    void addNumEntry(const char* label, float* zone, float, float, float, float)
        { dsp_object_link_control(x_, label, zone); }
};

class Meta {
public:
    void declare(const char *, const char *) {}
};

//------------------------------------------------------------------------------
#if defined(__GNUC__)
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#include DSP_CC_FILENAME

#if defined(__GNUC__)
#   pragma GCC diagnostic pop
#endif

//------------------------------------------------------------------------------
static t_class *dsp_object_class = 0;

struct t_dsp_object {
    t_object x_obj;
    FAUSTCLASS *x_dsp;
#if DSP_MAINSIGNALIN
    float x_signalin;
#endif
#define DSP_IMPL_CONTROL_MEMBER(symbol, ident, label, hasinlet, haslimit, min, max) \
    float *x_ctl_##ident;
    DSP_CONTROLS(DSP_IMPL_CONTROL_MEMBER);
#undef DSP_IMPL_CONTROL_MEMBER
};

static void dsp_object_link_control(t_dsp_object *x, const char *name, float *zone)
{
#define DSP_IMPL_LINK_CONTROL(symbol, ident, label, hasinlet, haslimit, min, max) \
    if (!std::strcmp(name, label)) {                                    \
        x->x_ctl_##ident = zone;                                        \
        return;                                                         \
    }
    DSP_CONTROLS(DSP_IMPL_LINK_CONTROL);
#undef DSP_IMPL_LINK_CONTROL
}

static void *dsp_object_new(t_symbol *, int argc, t_atom argv[])
{
    t_dsp_object *x = (t_dsp_object *)pd_new(dsp_object_class);
    t_float sr = sys_getsr();

    FAUSTCLASS *dsp = x->x_dsp = new FAUSTCLASS;
    dsp->init(sr);

    UI ui(x);
    dsp->buildUserInterface(&ui);

#if DSP_MAINSIGNALIN
    x->x_signalin = 0;
#endif

#if DSP_NUM_INPUTS > 0
    for (unsigned i = DSP_MAINSIGNALIN ? 1 : 0; i < DSP_NUM_INPUTS; ++i)
        inlet_new(&x->x_obj, &x->x_obj.ob_pd, &s_signal, &s_signal);
#endif

#if DSP_NUM_OUTPUTS > 0
    for (unsigned i = 0; i < DSP_NUM_OUTPUTS; ++i)
        outlet_new(&x->x_obj, &s_signal);
#endif

#define DSP_IMPL_CONTROL_INLET(symbol, ident, label, hasinlet, haslimit, min, max) \
    assert(x->x_ctl_##ident);                                           \
    if (hasinlet)                                                       \
        inlet_new(&x->x_obj, &x->x_obj.ob_pd, gensym("float"), gensym(symbol));
    DSP_CONTROLS(DSP_IMPL_CONTROL_INLET)
#undef DSP_IMPL_CONTROL_INLET

    switch (argc) {
    default:
        pd_free((t_pd *)x);
        return 0;
    case 0:
        (void)argv;
        break;
    }

    return x;
}

static void dsp_object_free(t_dsp_object *x)
{
    delete x->x_dsp;
}

static t_int *dsp_object_perform(t_int *w)
{
    t_dsp_object *x = (t_dsp_object *)*++w;
    unsigned n = (t_int)*++w;

    t_sample *in[DSP_NUM_INPUTS];
    t_sample *out[DSP_NUM_OUTPUTS];

#if DSP_NUM_INPUTS > 0
    for (unsigned i = 0; i < DSP_NUM_INPUTS; ++i)
        in[i] = (t_sample *)*++w;
#endif

#if DSP_NUM_OUTPUTS > 0
    for (unsigned i = 0; i < DSP_NUM_OUTPUTS; ++i)
        out[i] = (t_sample *)*++w;
#endif

    FAUSTCLASS *dsp = x->x_dsp;
    dsp->compute(n, in, out);

    return ++w;
}

static void dsp_object_dsp(t_dsp_object *x, t_signal **sp)
{
    enum { n = 2 + DSP_NUM_INPUTS + DSP_NUM_OUTPUTS };
    t_int vec[n];

    unsigned vi = 0;
    vec[vi++] = (t_int)x;
    vec[vi++] = (t_int)sp[0]->s_n;

#if DSP_NUM_INPUTS > 0 || DSP_NUM_OUTPUTS > 0
    for (unsigned i = 0; i < DSP_NUM_INPUTS + DSP_NUM_OUTPUTS; ++i)
        vec[vi++] = (t_int)sp[i]->s_vec;
#endif

    dsp_addv(&dsp_object_perform, n, vec);
}

#define DSP_IMPL_CONTROL_METHOD(symbol, ident, label, hasinlet, haslimit, min, max) \
    static void dsp_object_ctl_##ident(t_dsp_object *x, t_floatarg f)   \
    {                                                                   \
        if (haslimit) {                                                 \
            f = (f < min) ? min : f;                                    \
            f = (f > max) ? max : f;                                    \
        }                                                               \
        *x->x_ctl_##ident = f;                                          \
    }
DSP_CONTROLS(DSP_IMPL_CONTROL_METHOD)
#undef DSP_IMPL_CONTROL_METHOD

extern "C" {

#ifdef _WIN32
__declspec(dllexport)
#else
__attribute__((visibility("default")))
#endif
void DSP_SETUP()
{
    t_class *cls = dsp_object_class = class_new(
        gensym(DSP_CLASS_NAME),
        (t_newmethod)(void(*)())&dsp_object_new,
        (t_method)&dsp_object_free,
        sizeof(t_dsp_object),
#if DSP_MAINSIGNALIN
        CLASS_DEFAULT,
#else
        CLASS_NOINLET,
#endif
        A_GIMME, A_NULL);
#if DSP_MAINSIGNALIN
    CLASS_MAINSIGNALIN(
        cls, t_dsp_object, x_signalin);
#endif
    class_addmethod(
        cls, (t_method)&dsp_object_dsp, gensym("dsp"), A_CANT, A_NULL);

#define DSP_IMPL_ADD_METHOD(symbol, ident, label, hasinlet, haslimit, min, max) \
    class_addmethod(dsp_object_class, (t_method)dsp_object_ctl_##ident, gensym(symbol), A_FLOAT, 0);
    DSP_CONTROLS(DSP_IMPL_ADD_METHOD);
#undef DSP_IMPL_ADD_METHOD
}

}  // extern "C"
