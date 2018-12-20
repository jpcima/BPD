/* ------------------------------------------------------------
copyright: "(c)Romain Michon, CCRMA (Stanford University), GRAME"
license: "MIT"
name: "FrenchChurchBell"
Code generated with Faust 2.5.23 (https://faust.grame.fr)
Compilation options: cpp, -scal -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <cmath>
#include <math.h>

static float fmydspSIG0Wave0[350] = {0.972890019f,0.542393029f,0.495831996f,0.897966027f,0.552366972f,0.557895005f,0.61421299f,0.353693992f,0.436039001f,0.441024005f,0.674912989f,0.566753983f,0.755007982f,0.699029982f,0.164398f,0.910040021f,0.628373027f,0.201718003f,0.429517001f,0.503714979f,0.871173978f,0.106885999f,0.76117301f,0.673601985f,0.291936994f,0.588590026f,0.31527999f,0.41308099f,0.274464011f,0.494062006f,0.696120977f,0.612010002f,0.382757008f,0.995113015f,0.228806004f,0.198449001f,0.595847011f,0.306263f,0.252397001f,0.0883567035f,0.236085996f,1.0f,0.245278001f,0.379388005f,0.198824003f,0.548892021f,0.492763996f,0.42087099f,0.794637024f,0.605633974f,1.0f,0.604158998f,0.399841011f,0.799346983f,0.507187009f,0.509809971f,0.477382988f,0.310225993f,0.426975995f,0.437622994f,0.735711992f,0.630728006f,0.625784993f,0.651167989f,0.277738005f,0.850857973f,0.578078985f,0.645353973f,0.383700013f,0.370597988f,0.78254199f,0.181325004f,0.614391029f,0.740683973f,0.342440993f,0.586185992f,0.286909014f,0.405196995f,0.259214997f,0.566982985f,0.748219013f,0.655897975f,0.368259996f,0.940814018f,0.336156994f,0.413702011f,0.561556995f,0.402175993f,0.117697999f,0.329369009f,0.254570991f,0.870706022f,0.260980994f,0.274122f,0.206247002f,0.645299971f,0.400757998f,0.36362201f,0.636834025f,0.584565997f,0.975602984f,0.616936982f,0.295401007f,0.650447011f,0.464221001f,0.465056986f,0.312467009f,0.238358006f,0.383695006f,0.399673998f,0.753911972f,0.662011981f,0.504267991f,0.599247992f,0.378665f,0.725363016f,0.493214011f,1.0f,0.332836002f,0.265888989f,0.674072981f,0.320401013f,0.440017998f,0.769782007f,0.316419005f,0.529968023f,0.380508989f,0.578675985f,0.249013007f,0.591383994f,0.761717021f,0.687057018f,0.324436992f,0.818863988f,0.505369008f,0.672484994f,0.461782992f,0.426198006f,0.0678874999f,0.43532899f,0.347954988f,0.708393991f,0.293321997f,0.328985989f,0.258253992f,0.893512011f,0.320131004f,0.433553994f,0.459302008f,0.542213023f,0.817241013f,0.516229987f,0.205302f,0.467354f,0.388682991f,0.388215989f,0.171261996f,0.150865003f,0.291720003f,0.311414003f,0.658876002f,0.570647001f,0.38361901f,0.502454996f,0.364113986f,0.532312989f,0.352988988f,1.0f,0.261983991f,0.219591007f,0.544031024f,0.337199003f,0.279172987f,0.668303013f,0.208439007f,0.399230003f,0.418673992f,0.648617983f,0.234133005f,0.504728973f,0.645346999f,0.572851002f,0.232828006f,0.614292026f,0.48527199f,0.666263998f,0.316570014f,0.320354998f,0.191421002f,0.340131015f,0.342069f,0.538371027f,0.281130999f,0.393115014f,0.251394004f,0.890725017f,0.310644001f,0.503700018f,0.299089998f,0.442478001f,0.733128011f,0.455217004f,0.199322f,0.315699011f,0.375856012f,0.376489997f,0.0291450005f,0.0200283006f,0.279578f,0.316799998f,0.655956984f,0.546842992f,0.349665999f,0.470248997f,0.353765011f,0.286794007f,0.180185005f,1.0f,0.210831001f,0.280133009f,0.535853028f,0.376488f,0.153669998f,0.634745002f,0.0510449f,0.485574991f,0.593110979f,0.917883992f,0.380477011f,0.422924995f,0.599372983f,0.311421007f,0.135654002f,0.359954f,0.295747995f,0.474438995f,0.353338987f,0.116742998f,0.45431301f,0.112857997f,0.359310001f,0.483897001f,0.301607996f,0.577341974f,0.262663007f,0.79498601f,0.549579978f,0.808085978f,0.152511001f,0.439590991f,0.535941005f,0.308017999f,0.419836998f,0.579191029f,0.250427991f,0.252119988f,0.102860004f,0.288331985f,0.599678993f,0.665108025f,0.636285007f,0.495234013f,0.251612991f,0.208526999f,0.0939071998f,0.458415002f,0.318951994f,0.235349998f,0.215188995f,0.313412011f,0.0472786985f,0.0386893004f,0.0863358974f,0.222345993f,0.361510992f,0.997036994f,0.238508999f,0.382140011f,1.0f,0.203554004f,0.472086996f,0.509015024f,0.206370994f,0.441013008f,0.794008017f,0.971623003f,0.796383977f,0.55043f,0.687780023f,0.554297984f,0.0436545014f,0.0595576987f,0.214684993f,0.581470013f,0.277319998f,0.36846599f,0.121381998f,0.152739003f,0.0782243982f,0.190496996f,0.31626901f,0.180455998f,0.405196011f,0.518715978f,0.159364998f,0.165808007f,0.194371998f,0.614763975f,0.553415f,0.644793987f,0.441780001f,0.441489995f,0.221588001f,1.0f,0.579370975f,0.606338978f,0.529166996f,0.0214475002f,0.41704601f,0.663151979f,0.894841015f,0.475751996f,0.168289006f,0.468589991f,0.304603994f,0.666369021f,0.308337003f,0.295091003f,0.768944979f,0.350910991f,0.490680009f,0.516583979f,0.40011701f,0.820686996f,0.545485973f,0.709357023f,0.509759009f,0.472005993f,0.152455002f,0.981265008f,0.459134012f,0.698665977f,0.247153997f,0.623252988f,0.255508006f,0.830815017f,0.0887089968f,0.126082003f,0.0770623013f,0.263327986f};

class mydspSIG0 {
	
  private:
	
	int fmydspSIG0Wave0_idx;
	
  public:
	
	int getNumInputsmydspSIG0() {
		return 0;
		
	}
	int getNumOutputsmydspSIG0() {
		return 1;
		
	}
	int getInputRatemydspSIG0(int channel) {
		int rate;
		switch (channel) {
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	int getOutputRatemydspSIG0(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 0;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	
	void instanceInitmydspSIG0(int samplingFreq) {
		fmydspSIG0Wave0_idx = 0;
		
	}
	
	void fillmydspSIG0(int count, float* output) {
		for (int i = 0; (i < count); i = (i + 1)) {
			output[i] = fmydspSIG0Wave0[fmydspSIG0Wave0_idx];
			fmydspSIG0Wave0_idx = ((1 + fmydspSIG0Wave0_idx) % 350);
			
		}
		
	}
};

mydspSIG0* newmydspSIG0() { return (mydspSIG0*)new mydspSIG0(); }
void deletemydspSIG0(mydspSIG0* dsp) { delete dsp; }

float mydsp_faustpower2_f(float value) {
	return (value * value);
	
}
static float ftbl0mydspSIG0[350];

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif
#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class mydsp : public dsp {
	
 private:
	
	FAUSTFLOAT fHslider0;
	int fSamplingFreq;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fHslider1;
	float fConst2;
	float fConst3;
	float fConst4;
	float fConst5;
	int iRec3[2];
	float fConst6;
	float fConst7;
	float fRec2[3];
	float fConst8;
	float fRec1[3];
	FAUSTFLOAT fButton0;
	float fVec0[2];
	float fConst9;
	FAUSTFLOAT fHslider2;
	float fVec1[2];
	float fRec4[2];
	float fConst10;
	float fConst11;
	float fConst12;
	float fConst13;
	float fConst14;
	float fRec0[3];
	FAUSTFLOAT fEntry0;
	float fConst15;
	float fConst16;
	float fConst17;
	float fRec5[3];
	float fConst18;
	float fConst19;
	float fConst20;
	float fRec6[3];
	float fConst21;
	float fConst22;
	float fConst23;
	float fRec7[3];
	float fConst24;
	float fConst25;
	float fConst26;
	float fRec8[3];
	float fConst27;
	float fConst28;
	float fConst29;
	float fRec9[3];
	float fConst30;
	float fConst31;
	float fConst32;
	float fRec10[3];
	float fConst33;
	float fConst34;
	float fConst35;
	float fRec11[3];
	float fConst36;
	float fConst37;
	float fConst38;
	float fRec12[3];
	float fConst39;
	float fConst40;
	float fConst41;
	float fRec13[3];
	float fConst42;
	float fConst43;
	float fConst44;
	float fRec14[3];
	float fConst45;
	float fConst46;
	float fConst47;
	float fRec15[3];
	float fConst48;
	float fConst49;
	float fConst50;
	float fRec16[3];
	float fConst51;
	float fConst52;
	float fConst53;
	float fRec17[3];
	float fConst54;
	float fConst55;
	float fConst56;
	float fRec18[3];
	float fConst57;
	float fConst58;
	float fConst59;
	float fRec19[3];
	float fConst60;
	float fConst61;
	float fConst62;
	float fRec20[3];
	float fConst63;
	float fConst64;
	float fConst65;
	float fRec21[3];
	float fConst66;
	float fConst67;
	float fConst68;
	float fRec22[3];
	float fConst69;
	float fConst70;
	float fConst71;
	float fRec23[3];
	float fConst72;
	float fConst73;
	float fConst74;
	float fRec24[3];
	float fConst75;
	float fConst76;
	float fConst77;
	float fRec25[3];
	float fConst78;
	float fConst79;
	float fConst80;
	float fRec26[3];
	float fConst81;
	float fConst82;
	float fConst83;
	float fRec27[3];
	float fConst84;
	float fConst85;
	float fConst86;
	float fRec28[3];
	float fConst87;
	float fConst88;
	float fConst89;
	float fRec29[3];
	float fConst90;
	float fConst91;
	float fConst92;
	float fRec30[3];
	float fConst93;
	float fConst94;
	float fConst95;
	float fRec31[3];
	float fConst96;
	float fConst97;
	float fConst98;
	float fRec32[3];
	float fConst99;
	float fConst100;
	float fConst101;
	float fRec33[3];
	float fConst102;
	float fConst103;
	float fConst104;
	float fRec34[3];
	float fConst105;
	float fConst106;
	float fConst107;
	float fRec35[3];
	float fConst108;
	float fConst109;
	float fConst110;
	float fRec36[3];
	float fConst111;
	float fConst112;
	float fConst113;
	float fRec37[3];
	float fConst114;
	float fConst115;
	float fConst116;
	float fRec38[3];
	float fConst117;
	float fConst118;
	float fConst119;
	float fRec39[3];
	float fConst120;
	float fConst121;
	float fConst122;
	float fRec40[3];
	float fConst123;
	float fConst124;
	float fConst125;
	float fRec41[3];
	float fConst126;
	float fConst127;
	float fConst128;
	float fRec42[3];
	float fConst129;
	float fConst130;
	float fConst131;
	float fRec43[3];
	float fConst132;
	float fConst133;
	float fConst134;
	float fRec44[3];
	float fConst135;
	float fConst136;
	float fConst137;
	float fRec45[3];
	float fConst138;
	float fConst139;
	float fConst140;
	float fRec46[3];
	float fConst141;
	float fConst142;
	float fConst143;
	float fRec47[3];
	float fConst144;
	float fConst145;
	float fConst146;
	float fRec48[3];
	float fConst147;
	float fConst148;
	float fConst149;
	float fRec49[3];
	float fConst150;
	float fConst151;
	float fConst152;
	float fRec50[3];
	float fConst153;
	float fConst154;
	float fConst155;
	float fRec51[3];
	float fConst156;
	float fConst157;
	float fConst158;
	float fRec52[3];
	float fConst159;
	float fConst160;
	float fConst161;
	float fRec53[3];
	
 public:
	
	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/version", "0.0");
		m->declare("copyright", "(c)Romain Michon, CCRMA (Stanford University), GRAME");
		m->declare("description", "French church bell physical model.");
		m->declare("envelopes.lib/author", "GRAME");
		m->declare("envelopes.lib/copyright", "GRAME");
		m->declare("envelopes.lib/license", "LGPL with exception");
		m->declare("envelopes.lib/name", "Faust Envelope Library");
		m->declare("envelopes.lib/version", "0.0");
		m->declare("filename", "frenchBell");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/version", "0.0");
		m->declare("license", "MIT");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.1");
		m->declare("name", "FrenchChurchBell");
		m->declare("noises.lib/name", "Faust Noise Generator Library");
		m->declare("noises.lib/version", "0.0");
	}

	virtual int getNumInputs() {
		return 0;
		
	}
	virtual int getNumOutputs() {
		return 2;
		
	}
	virtual int getInputRate(int channel) {
		int rate;
		switch (channel) {
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	virtual int getOutputRate(int channel) {
		int rate;
		switch (channel) {
			case 0: {
				rate = 1;
				break;
			}
			case 1: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
			
		}
		return rate;
		
	}
	
	static void classInit(int samplingFreq) {
		mydspSIG0* sig0 = newmydspSIG0();
		sig0->instanceInitmydspSIG0(samplingFreq);
		sig0->fillmydspSIG0(350, ftbl0mydspSIG0);
		deletemydspSIG0(sig0);
		
	}
	
	virtual void instanceConstants(int samplingFreq) {
		fSamplingFreq = samplingFreq;
		fConst0 = min(192000.0f, max(1.0f, float(fSamplingFreq)));
		fConst1 = (3.14159274f / fConst0);
		fConst2 = tanf((31.415926f / fConst0));
		fConst3 = (1.0f / fConst2);
		fConst4 = (1.0f / (((fConst3 + 1.41421354f) / fConst2) + 1.0f));
		fConst5 = (1.0f / mydsp_faustpower2_f(fConst2));
		fConst6 = (((fConst3 + -1.41421354f) / fConst2) + 1.0f);
		fConst7 = (2.0f * (1.0f - fConst5));
		fConst8 = (2.0f * (0.0f - fConst5));
		fConst9 = (0.00400000019f * fConst0);
		fConst10 = (0.00200000009f * fConst0);
		fConst11 = (500.0f / fConst0);
		fConst12 = powf(0.00100000005f, (1.0f / (0.179084182f * fConst0)));
		fConst13 = (cosf((13142.916f / fConst0)) * (0.0f - (2.0f * fConst12)));
		fConst14 = mydsp_faustpower2_f(fConst12);
		fConst15 = powf(0.00100000005f, (1.0f / (17.0404034f * fConst0)));
		fConst16 = (cosf((2758.80225f / fConst0)) * (0.0f - (2.0f * fConst15)));
		fConst17 = mydsp_faustpower2_f(fConst15);
		fConst18 = powf(0.00100000005f, (1.0f / (17.0107555f * fConst0)));
		fConst19 = (cosf((2766.51782f / fConst0)) * (0.0f - (2.0f * fConst18)));
		fConst20 = mydsp_faustpower2_f(fConst18);
		fConst21 = powf(0.00100000005f, (1.0f / (13.3085108f * fConst0)));
		fConst22 = (cosf((3810.4502f / fConst0)) * (0.0f - (2.0f * fConst21)));
		fConst23 = mydsp_faustpower2_f(fConst21);
		fConst24 = powf(0.00100000005f, (1.0f / (13.1997375f * fConst0)));
		fConst25 = (cosf((3843.90186f / fConst0)) * (0.0f - (2.0f * fConst24)));
		fConst26 = mydsp_faustpower2_f(fConst24);
		fConst27 = powf(0.00100000005f, (1.0f / (11.3049049f * fConst0)));
		fConst28 = (cosf((4458.65527f / fConst0)) * (0.0f - (2.0f * fConst27)));
		fConst29 = mydsp_faustpower2_f(fConst27);
		fConst30 = powf(0.00100000005f, (1.0f / (11.300128f * fConst0)));
		fConst31 = (cosf((4460.28857f / fConst0)) * (0.0f - (2.0f * fConst30)));
		fConst32 = mydsp_faustpower2_f(fConst30);
		fConst33 = powf(0.00100000005f, (1.0f / (8.80774784f * fConst0)));
		fConst34 = (cosf((5384.47607f / fConst0)) * (0.0f - (2.0f * fConst33)));
		fConst35 = mydsp_faustpower2_f(fConst33);
		fConst36 = powf(0.00100000005f, (1.0f / (8.16906738f * fConst0)));
		fConst37 = (cosf((5648.90381f / fConst0)) * (0.0f - (2.0f * fConst36)));
		fConst38 = mydsp_faustpower2_f(fConst36);
		fConst39 = powf(0.00100000005f, (1.0f / (5.95891714f * fConst0)));
		fConst40 = (cosf((6687.63379f / fConst0)) * (0.0f - (2.0f * fConst39)));
		fConst41 = mydsp_faustpower2_f(fConst39);
		fConst42 = powf(0.00100000005f, (1.0f / (5.95436192f * fConst0)));
		fConst43 = (cosf((6690.02148f / fConst0)) * (0.0f - (2.0f * fConst42)));
		fConst44 = mydsp_faustpower2_f(fConst42);
		fConst45 = powf(0.00100000005f, (1.0f / (5.85568237f * fConst0)));
		fConst46 = (cosf((6742.04639f / fConst0)) * (0.0f - (2.0f * fConst45)));
		fConst47 = mydsp_faustpower2_f(fConst45);
		fConst48 = powf(0.00100000005f, (1.0f / (5.83910608f * fConst0)));
		fConst49 = (cosf((6750.84277f / fConst0)) * (0.0f - (2.0f * fConst48)));
		fConst50 = mydsp_faustpower2_f(fConst48);
		fConst51 = powf(0.00100000005f, (1.0f / (5.81371069f * fConst0)));
		fConst52 = (cosf((6764.35156f / fConst0)) * (0.0f - (2.0f * fConst51)));
		fConst53 = mydsp_faustpower2_f(fConst51);
		fConst54 = powf(0.00100000005f, (1.0f / (5.03897285f * fConst0)));
		fConst55 = (cosf((7196.88623f / fConst0)) * (0.0f - (2.0f * fConst54)));
		fConst56 = mydsp_faustpower2_f(fConst54);
		fConst57 = powf(0.00100000005f, (1.0f / (5.0017519f * fConst0)));
		fConst58 = (cosf((7218.75146f / fConst0)) * (0.0f - (2.0f * fConst57)));
		fConst59 = mydsp_faustpower2_f(fConst57);
		fConst60 = powf(0.00100000005f, (1.0f / (4.50501585f * fConst0)));
		fConst61 = (cosf((7521.53809f / fConst0)) * (0.0f - (2.0f * fConst60)));
		fConst62 = mydsp_faustpower2_f(fConst60);
		fConst63 = powf(0.00100000005f, (1.0f / (4.47701359f * fConst0)));
		fConst64 = (cosf((7539.25684f / fConst0)) * (0.0f - (2.0f * fConst63)));
		fConst65 = mydsp_faustpower2_f(fConst63);
		fConst66 = powf(0.00100000005f, (1.0f / (2.86205411f * fConst0)));
		fConst67 = (cosf((8719.17578f / fConst0)) * (0.0f - (2.0f * fConst66)));
		fConst68 = mydsp_faustpower2_f(fConst66);
		fConst69 = powf(0.00100000005f, (1.0f / (2.77140141f * fConst0)));
		fConst70 = (cosf((8797.46484f / fConst0)) * (0.0f - (2.0f * fConst69)));
		fConst71 = mydsp_faustpower2_f(fConst69);
		fConst72 = powf(0.00100000005f, (1.0f / (2.75552511f * fConst0)));
		fConst73 = (cosf((8811.35059f / fConst0)) * (0.0f - (2.0f * fConst72)));
		fConst74 = mydsp_faustpower2_f(fConst72);
		fConst75 = powf(0.00100000005f, (1.0f / (2.04149461f * fConst0)));
		fConst76 = (cosf((9500.55273f / fConst0)) * (0.0f - (2.0f * fConst75)));
		fConst77 = mydsp_faustpower2_f(fConst75);
		fConst78 = powf(0.00100000005f, (1.0f / (2.03562975f * fConst0)));
		fConst79 = (cosf((9506.83594f / fConst0)) * (0.0f - (2.0f * fConst78)));
		fConst80 = mydsp_faustpower2_f(fConst78);
		fConst81 = powf(0.00100000005f, (1.0f / (1.60488677f * fConst0)));
		fConst82 = (cosf((10005.7842f / fConst0)) * (0.0f - (2.0f * fConst81)));
		fConst83 = mydsp_faustpower2_f(fConst81);
		fConst84 = powf(0.00100000005f, (1.0f / (1.60049033f * fConst0)));
		fConst85 = (cosf((10011.3135f / fConst0)) * (0.0f - (2.0f * fConst84)));
		fConst86 = mydsp_faustpower2_f(fConst84);
		fConst87 = powf(0.00100000005f, (1.0f / (1.27547228f * fConst0)));
		fConst88 = (cosf((10451.7646f / fConst0)) * (0.0f - (2.0f * fConst87)));
		fConst89 = mydsp_faustpower2_f(fConst87);
		fConst90 = powf(0.00100000005f, (1.0f / (1.26255906f * fConst0)));
		fConst91 = (cosf((10470.7402f / fConst0)) * (0.0f - (2.0f * fConst90)));
		fConst92 = mydsp_faustpower2_f(fConst90);
		fConst93 = powf(0.00100000005f, (1.0f / (1.15959585f * fConst0)));
		fConst94 = (cosf((10626.877f / fConst0)) * (0.0f - (2.0f * fConst93)));
		fConst95 = mydsp_faustpower2_f(fConst93);
		fConst96 = powf(0.00100000005f, (1.0f / (1.14975893f * fConst0)));
		fConst97 = (cosf((10642.2705f / fConst0)) * (0.0f - (2.0f * fConst96)));
		fConst98 = mydsp_faustpower2_f(fConst96);
		fConst99 = powf(0.00100000005f, (1.0f / (0.75996846f * fConst0)));
		fConst100 = (cosf((11340.0811f / fConst0)) * (0.0f - (2.0f * fConst99)));
		fConst101 = mydsp_faustpower2_f(fConst99);
		fConst102 = powf(0.00100000005f, (1.0f / (0.747851193f * fConst0)));
		fConst103 = (cosf((11365.2773f / fConst0)) * (0.0f - (2.0f * fConst102)));
		fConst104 = mydsp_faustpower2_f(fConst102);
		fConst105 = powf(0.00100000005f, (1.0f / (0.714603662f * fConst0)));
		fConst106 = (cosf((11435.8369f / fConst0)) * (0.0f - (2.0f * fConst105)));
		fConst107 = mydsp_faustpower2_f(fConst105);
		fConst108 = powf(0.00100000005f, (1.0f / (0.638542414f * fConst0)));
		fConst109 = (cosf((11605.9229f / fConst0)) * (0.0f - (2.0f * fConst108)));
		fConst110 = mydsp_faustpower2_f(fConst108);
		fConst111 = powf(0.00100000005f, (1.0f / (0.48151058f * fConst0)));
		fConst112 = (cosf((12005.4707f / fConst0)) * (0.0f - (2.0f * fConst111)));
		fConst113 = mydsp_faustpower2_f(fConst111);
		fConst114 = powf(0.00100000005f, (1.0f / (0.444471955f * fConst0)));
		fConst115 = (cosf((12112.0967f / fConst0)) * (0.0f - (2.0f * fConst114)));
		fConst116 = mydsp_faustpower2_f(fConst114);
		fConst117 = powf(0.00100000005f, (1.0f / (0.253152221f * fConst0)));
		fConst118 = (cosf((12786.7217f / fConst0)) * (0.0f - (2.0f * fConst117)));
		fConst119 = mydsp_faustpower2_f(fConst117);
		fConst120 = powf(0.00100000005f, (1.0f / (0.247846678f * fConst0)));
		fConst121 = (cosf((12809.7188f / fConst0)) * (0.0f - (2.0f * fConst120)));
		fConst122 = mydsp_faustpower2_f(fConst120);
		fConst123 = powf(0.00100000005f, (1.0f / (0.2256172f * fConst0)));
		fConst124 = (cosf((12909.8096f / fConst0)) * (0.0f - (2.0f * fConst123)));
		fConst125 = mydsp_faustpower2_f(fConst123);
		fConst126 = powf(0.00100000005f, (1.0f / (0.224254459f * fConst0)));
		fConst127 = (cosf((12916.1553f / fConst0)) * (0.0f - (2.0f * fConst126)));
		fConst128 = mydsp_faustpower2_f(fConst126);
		fConst129 = powf(0.00100000005f, (1.0f / (0.194663718f * fConst0)));
		fConst130 = (cosf((13060.7949f / fConst0)) * (0.0f - (2.0f * fConst129)));
		fConst131 = mydsp_faustpower2_f(fConst129);
		fConst132 = powf(0.00100000005f, (1.0f / (0.152662188f * fConst0)));
		fConst133 = (cosf((13293.8379f / fConst0)) * (0.0f - (2.0f * fConst132)));
		fConst134 = mydsp_faustpower2_f(fConst132);
		fConst135 = powf(0.00100000005f, (1.0f / (0.141256809f * fConst0)));
		fConst136 = (cosf((13364.3984f / fConst0)) * (0.0f - (2.0f * fConst135)));
		fConst137 = mydsp_faustpower2_f(fConst135);
		fConst138 = powf(0.00100000005f, (1.0f / (0.0741162524f * fConst0)));
		fConst139 = (cosf((13884.96f / fConst0)) * (0.0f - (2.0f * fConst138)));
		fConst140 = mydsp_faustpower2_f(fConst138);
		fConst141 = powf(0.00100000005f, (1.0f / (0.0714518651f * fConst0)));
		fConst142 = (cosf((13911.2861f / fConst0)) * (0.0f - (2.0f * fConst141)));
		fConst143 = mydsp_faustpower2_f(fConst141);
		fConst144 = powf(0.00100000005f, (1.0f / (0.0312931463f * fConst0)));
		fConst145 = (cosf((14427.1357f / fConst0)) * (0.0f - (2.0f * fConst144)));
		fConst146 = mydsp_faustpower2_f(fConst144);
		fConst147 = powf(0.00100000005f, (1.0f / (0.0305991787f * fConst0)));
		fConst148 = (cosf((14439.2627f / fConst0)) * (0.0f - (2.0f * fConst147)));
		fConst149 = mydsp_faustpower2_f(fConst147);
		fConst150 = powf(0.00100000005f, (1.0f / (0.0302826501f * fConst0)));
		fConst151 = (cosf((14444.8545f / fConst0)) * (0.0f - (2.0f * fConst150)));
		fConst152 = mydsp_faustpower2_f(fConst150);
		fConst153 = powf(0.00100000005f, (1.0f / (0.0273192264f * fConst0)));
		fConst154 = (cosf((14499.2041f / fConst0)) * (0.0f - (2.0f * fConst153)));
		fConst155 = mydsp_faustpower2_f(fConst153);
		fConst156 = powf(0.00100000005f, (1.0f / (0.00617330708f * fConst0)));
		fConst157 = (cosf((15107.542f / fConst0)) * (0.0f - (2.0f * fConst156)));
		fConst158 = mydsp_faustpower2_f(fConst156);
		fConst159 = powf(0.00100000005f, (1.0f / (0.0056314161f * fConst0)));
		fConst160 = (cosf((15136.1309f / fConst0)) * (0.0f - (2.0f * fConst159)));
		fConst161 = mydsp_faustpower2_f(fConst159);
		
	}
	
	virtual void instanceResetUserInterface() {
		fHslider0 = FAUSTFLOAT(1.0f);
		fHslider1 = FAUSTFLOAT(6500.0f);
		fButton0 = FAUSTFLOAT(0.0f);
		fHslider2 = FAUSTFLOAT(0.5f);
		fEntry0 = FAUSTFLOAT(0.0f);
		
	}
	
	virtual void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			iRec3[l0] = 0;
			
		}
		for (int l1 = 0; (l1 < 3); l1 = (l1 + 1)) {
			fRec2[l1] = 0.0f;
			
		}
		for (int l2 = 0; (l2 < 3); l2 = (l2 + 1)) {
			fRec1[l2] = 0.0f;
			
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fVec0[l3] = 0.0f;
			
		}
		for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) {
			fVec1[l4] = 0.0f;
			
		}
		for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) {
			fRec4[l5] = 0.0f;
			
		}
		for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) {
			fRec0[l6] = 0.0f;
			
		}
		for (int l7 = 0; (l7 < 3); l7 = (l7 + 1)) {
			fRec5[l7] = 0.0f;
			
		}
		for (int l8 = 0; (l8 < 3); l8 = (l8 + 1)) {
			fRec6[l8] = 0.0f;
			
		}
		for (int l9 = 0; (l9 < 3); l9 = (l9 + 1)) {
			fRec7[l9] = 0.0f;
			
		}
		for (int l10 = 0; (l10 < 3); l10 = (l10 + 1)) {
			fRec8[l10] = 0.0f;
			
		}
		for (int l11 = 0; (l11 < 3); l11 = (l11 + 1)) {
			fRec9[l11] = 0.0f;
			
		}
		for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) {
			fRec10[l12] = 0.0f;
			
		}
		for (int l13 = 0; (l13 < 3); l13 = (l13 + 1)) {
			fRec11[l13] = 0.0f;
			
		}
		for (int l14 = 0; (l14 < 3); l14 = (l14 + 1)) {
			fRec12[l14] = 0.0f;
			
		}
		for (int l15 = 0; (l15 < 3); l15 = (l15 + 1)) {
			fRec13[l15] = 0.0f;
			
		}
		for (int l16 = 0; (l16 < 3); l16 = (l16 + 1)) {
			fRec14[l16] = 0.0f;
			
		}
		for (int l17 = 0; (l17 < 3); l17 = (l17 + 1)) {
			fRec15[l17] = 0.0f;
			
		}
		for (int l18 = 0; (l18 < 3); l18 = (l18 + 1)) {
			fRec16[l18] = 0.0f;
			
		}
		for (int l19 = 0; (l19 < 3); l19 = (l19 + 1)) {
			fRec17[l19] = 0.0f;
			
		}
		for (int l20 = 0; (l20 < 3); l20 = (l20 + 1)) {
			fRec18[l20] = 0.0f;
			
		}
		for (int l21 = 0; (l21 < 3); l21 = (l21 + 1)) {
			fRec19[l21] = 0.0f;
			
		}
		for (int l22 = 0; (l22 < 3); l22 = (l22 + 1)) {
			fRec20[l22] = 0.0f;
			
		}
		for (int l23 = 0; (l23 < 3); l23 = (l23 + 1)) {
			fRec21[l23] = 0.0f;
			
		}
		for (int l24 = 0; (l24 < 3); l24 = (l24 + 1)) {
			fRec22[l24] = 0.0f;
			
		}
		for (int l25 = 0; (l25 < 3); l25 = (l25 + 1)) {
			fRec23[l25] = 0.0f;
			
		}
		for (int l26 = 0; (l26 < 3); l26 = (l26 + 1)) {
			fRec24[l26] = 0.0f;
			
		}
		for (int l27 = 0; (l27 < 3); l27 = (l27 + 1)) {
			fRec25[l27] = 0.0f;
			
		}
		for (int l28 = 0; (l28 < 3); l28 = (l28 + 1)) {
			fRec26[l28] = 0.0f;
			
		}
		for (int l29 = 0; (l29 < 3); l29 = (l29 + 1)) {
			fRec27[l29] = 0.0f;
			
		}
		for (int l30 = 0; (l30 < 3); l30 = (l30 + 1)) {
			fRec28[l30] = 0.0f;
			
		}
		for (int l31 = 0; (l31 < 3); l31 = (l31 + 1)) {
			fRec29[l31] = 0.0f;
			
		}
		for (int l32 = 0; (l32 < 3); l32 = (l32 + 1)) {
			fRec30[l32] = 0.0f;
			
		}
		for (int l33 = 0; (l33 < 3); l33 = (l33 + 1)) {
			fRec31[l33] = 0.0f;
			
		}
		for (int l34 = 0; (l34 < 3); l34 = (l34 + 1)) {
			fRec32[l34] = 0.0f;
			
		}
		for (int l35 = 0; (l35 < 3); l35 = (l35 + 1)) {
			fRec33[l35] = 0.0f;
			
		}
		for (int l36 = 0; (l36 < 3); l36 = (l36 + 1)) {
			fRec34[l36] = 0.0f;
			
		}
		for (int l37 = 0; (l37 < 3); l37 = (l37 + 1)) {
			fRec35[l37] = 0.0f;
			
		}
		for (int l38 = 0; (l38 < 3); l38 = (l38 + 1)) {
			fRec36[l38] = 0.0f;
			
		}
		for (int l39 = 0; (l39 < 3); l39 = (l39 + 1)) {
			fRec37[l39] = 0.0f;
			
		}
		for (int l40 = 0; (l40 < 3); l40 = (l40 + 1)) {
			fRec38[l40] = 0.0f;
			
		}
		for (int l41 = 0; (l41 < 3); l41 = (l41 + 1)) {
			fRec39[l41] = 0.0f;
			
		}
		for (int l42 = 0; (l42 < 3); l42 = (l42 + 1)) {
			fRec40[l42] = 0.0f;
			
		}
		for (int l43 = 0; (l43 < 3); l43 = (l43 + 1)) {
			fRec41[l43] = 0.0f;
			
		}
		for (int l44 = 0; (l44 < 3); l44 = (l44 + 1)) {
			fRec42[l44] = 0.0f;
			
		}
		for (int l45 = 0; (l45 < 3); l45 = (l45 + 1)) {
			fRec43[l45] = 0.0f;
			
		}
		for (int l46 = 0; (l46 < 3); l46 = (l46 + 1)) {
			fRec44[l46] = 0.0f;
			
		}
		for (int l47 = 0; (l47 < 3); l47 = (l47 + 1)) {
			fRec45[l47] = 0.0f;
			
		}
		for (int l48 = 0; (l48 < 3); l48 = (l48 + 1)) {
			fRec46[l48] = 0.0f;
			
		}
		for (int l49 = 0; (l49 < 3); l49 = (l49 + 1)) {
			fRec47[l49] = 0.0f;
			
		}
		for (int l50 = 0; (l50 < 3); l50 = (l50 + 1)) {
			fRec48[l50] = 0.0f;
			
		}
		for (int l51 = 0; (l51 < 3); l51 = (l51 + 1)) {
			fRec49[l51] = 0.0f;
			
		}
		for (int l52 = 0; (l52 < 3); l52 = (l52 + 1)) {
			fRec50[l52] = 0.0f;
			
		}
		for (int l53 = 0; (l53 < 3); l53 = (l53 + 1)) {
			fRec51[l53] = 0.0f;
			
		}
		for (int l54 = 0; (l54 < 3); l54 = (l54 + 1)) {
			fRec52[l54] = 0.0f;
			
		}
		for (int l55 = 0; (l55 < 3); l55 = (l55 + 1)) {
			fRec53[l55] = 0.0f;
			
		}
		
	}
	
	virtual void init(int samplingFreq) {
		classInit(samplingFreq);
		instanceInit(samplingFreq);
	}
	virtual void instanceInit(int samplingFreq) {
		instanceConstants(samplingFreq);
		instanceResetUserInterface();
		instanceClear();
	}
	
	virtual mydsp* clone() {
		return new mydsp();
	}
	virtual int getSampleRate() {
		return fSamplingFreq;
		
	}
	
	virtual void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("frenchBell");
		ui_interface->declare(&fEntry0, "0", "");
		ui_interface->addNumEntry("strikePosition", &fEntry0, 0.0f, 0.0f, 4.0f, 1.0f);
		ui_interface->declare(&fHslider1, "1", "");
		ui_interface->addHorizontalSlider("strikeCutOff", &fHslider1, 6500.0f, 20.0f, 20000.0f, 1.0f);
		ui_interface->declare(&fHslider2, "2", "");
		ui_interface->addHorizontalSlider("strikeSharpness", &fHslider2, 0.5f, 0.00999999978f, 5.0f, 0.00999999978f);
		ui_interface->declare(&fHslider0, "3", "");
		ui_interface->addHorizontalSlider("gain", &fHslider0, 1.0f, 0.0f, 1.0f, 0.00999999978f);
		ui_interface->declare(&fButton0, "4", "");
		ui_interface->addButton("gate", &fButton0);
		ui_interface->closeBox();
		
	}
	
	virtual void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		float fSlow0 = tanf((fConst1 * float(fHslider1)));
		float fSlow1 = (1.0f / fSlow0);
		float fSlow2 = (((fSlow1 + 1.41421354f) / fSlow0) + 1.0f);
		float fSlow3 = (float(fHslider0) / fSlow2);
		float fSlow4 = (1.0f / fSlow2);
		float fSlow5 = (((fSlow1 + -1.41421354f) / fSlow0) + 1.0f);
		float fSlow6 = (2.0f * (1.0f - (1.0f / mydsp_faustpower2_f(fSlow0))));
		float fSlow7 = float(fButton0);
		float fSlow8 = float(fHslider2);
		float fSlow9 = (fConst9 * fSlow8);
		float fSlow10 = (fConst10 * fSlow8);
		float fSlow11 = (fConst11 / fSlow8);
		int iSlow12 = (50 * int(float(fEntry0)));
		float fSlow13 = ftbl0mydspSIG0[(iSlow12 + 39)];
		float fSlow14 = ftbl0mydspSIG0[iSlow12];
		float fSlow15 = ftbl0mydspSIG0[(iSlow12 + 1)];
		float fSlow16 = ftbl0mydspSIG0[(iSlow12 + 2)];
		float fSlow17 = ftbl0mydspSIG0[(iSlow12 + 3)];
		float fSlow18 = ftbl0mydspSIG0[(iSlow12 + 4)];
		float fSlow19 = ftbl0mydspSIG0[(iSlow12 + 5)];
		float fSlow20 = ftbl0mydspSIG0[(iSlow12 + 6)];
		float fSlow21 = ftbl0mydspSIG0[(iSlow12 + 7)];
		float fSlow22 = ftbl0mydspSIG0[(iSlow12 + 8)];
		float fSlow23 = ftbl0mydspSIG0[(iSlow12 + 9)];
		float fSlow24 = ftbl0mydspSIG0[(iSlow12 + 10)];
		float fSlow25 = ftbl0mydspSIG0[(iSlow12 + 11)];
		float fSlow26 = ftbl0mydspSIG0[(iSlow12 + 12)];
		float fSlow27 = ftbl0mydspSIG0[(iSlow12 + 13)];
		float fSlow28 = ftbl0mydspSIG0[(iSlow12 + 14)];
		float fSlow29 = ftbl0mydspSIG0[(iSlow12 + 15)];
		float fSlow30 = ftbl0mydspSIG0[(iSlow12 + 16)];
		float fSlow31 = ftbl0mydspSIG0[(iSlow12 + 17)];
		float fSlow32 = ftbl0mydspSIG0[(iSlow12 + 18)];
		float fSlow33 = ftbl0mydspSIG0[(iSlow12 + 19)];
		float fSlow34 = ftbl0mydspSIG0[(iSlow12 + 20)];
		float fSlow35 = ftbl0mydspSIG0[(iSlow12 + 21)];
		float fSlow36 = ftbl0mydspSIG0[(iSlow12 + 22)];
		float fSlow37 = ftbl0mydspSIG0[(iSlow12 + 23)];
		float fSlow38 = ftbl0mydspSIG0[(iSlow12 + 24)];
		float fSlow39 = ftbl0mydspSIG0[(iSlow12 + 25)];
		float fSlow40 = ftbl0mydspSIG0[(iSlow12 + 26)];
		float fSlow41 = ftbl0mydspSIG0[(iSlow12 + 27)];
		float fSlow42 = ftbl0mydspSIG0[(iSlow12 + 28)];
		float fSlow43 = ftbl0mydspSIG0[(iSlow12 + 29)];
		float fSlow44 = ftbl0mydspSIG0[(iSlow12 + 30)];
		float fSlow45 = ftbl0mydspSIG0[(iSlow12 + 31)];
		float fSlow46 = ftbl0mydspSIG0[(iSlow12 + 32)];
		float fSlow47 = ftbl0mydspSIG0[(iSlow12 + 33)];
		float fSlow48 = ftbl0mydspSIG0[(iSlow12 + 34)];
		float fSlow49 = ftbl0mydspSIG0[(iSlow12 + 35)];
		float fSlow50 = ftbl0mydspSIG0[(iSlow12 + 36)];
		float fSlow51 = ftbl0mydspSIG0[(iSlow12 + 37)];
		float fSlow52 = ftbl0mydspSIG0[(iSlow12 + 38)];
		float fSlow53 = ftbl0mydspSIG0[(iSlow12 + 40)];
		float fSlow54 = ftbl0mydspSIG0[(iSlow12 + 41)];
		float fSlow55 = ftbl0mydspSIG0[(iSlow12 + 42)];
		float fSlow56 = ftbl0mydspSIG0[(iSlow12 + 43)];
		float fSlow57 = ftbl0mydspSIG0[(iSlow12 + 44)];
		float fSlow58 = ftbl0mydspSIG0[(iSlow12 + 45)];
		float fSlow59 = ftbl0mydspSIG0[(iSlow12 + 46)];
		float fSlow60 = ftbl0mydspSIG0[(iSlow12 + 47)];
		float fSlow61 = ftbl0mydspSIG0[(iSlow12 + 48)];
		float fSlow62 = ftbl0mydspSIG0[(iSlow12 + 49)];
		for (int i = 0; (i < count); i = (i + 1)) {
			iRec3[0] = ((1103515245 * iRec3[1]) + 12345);
			fRec2[0] = ((4.65661287e-10f * float(iRec3[0])) - (fConst4 * ((fConst6 * fRec2[2]) + (fConst7 * fRec2[1]))));
			fRec1[0] = ((fConst4 * (((fConst5 * fRec2[0]) + (fConst8 * fRec2[1])) + (fConst5 * fRec2[2]))) - (fSlow4 * ((fSlow5 * fRec1[2]) + (fSlow6 * fRec1[1]))));
			fVec0[0] = fSlow7;
			fVec1[0] = fSlow8;
			fRec4[0] = ((((fSlow7 - fVec0[1]) > 0.0f) > 0)?0.0f:min(fSlow9, (fRec4[1] + (1.0f - (fConst9 * (fVec1[1] - fSlow8))))));
			int iTemp0 = (fRec4[0] < fSlow10);
			float fTemp1 = (fSlow3 * ((fRec1[2] + (fRec1[0] + (2.0f * fRec1[1]))) * (iTemp0?((fRec4[0] < 0.0f)?0.0f:(iTemp0?(fSlow11 * fRec4[0]):1.0f)):((fRec4[0] < fSlow9)?((fSlow11 * (0.0f - (fRec4[0] - fSlow10))) + 1.0f):0.0f))));
			fRec0[0] = (fTemp1 - ((fConst13 * fRec0[1]) + (fConst14 * fRec0[2])));
			fRec5[0] = (fTemp1 - ((fConst16 * fRec5[1]) + (fConst17 * fRec5[2])));
			fRec6[0] = (fTemp1 - ((fConst19 * fRec6[1]) + (fConst20 * fRec6[2])));
			fRec7[0] = (fTemp1 - ((fConst22 * fRec7[1]) + (fConst23 * fRec7[2])));
			fRec8[0] = (fTemp1 - ((fConst25 * fRec8[1]) + (fConst26 * fRec8[2])));
			fRec9[0] = (fTemp1 - ((fConst28 * fRec9[1]) + (fConst29 * fRec9[2])));
			fRec10[0] = (fTemp1 - ((fConst31 * fRec10[1]) + (fConst32 * fRec10[2])));
			fRec11[0] = (fTemp1 - ((fConst34 * fRec11[1]) + (fConst35 * fRec11[2])));
			fRec12[0] = (fTemp1 - ((fConst37 * fRec12[1]) + (fConst38 * fRec12[2])));
			fRec13[0] = (fTemp1 - ((fConst40 * fRec13[1]) + (fConst41 * fRec13[2])));
			fRec14[0] = (fTemp1 - ((fConst43 * fRec14[1]) + (fConst44 * fRec14[2])));
			fRec15[0] = (fTemp1 - ((fConst46 * fRec15[1]) + (fConst47 * fRec15[2])));
			fRec16[0] = (fTemp1 - ((fConst49 * fRec16[1]) + (fConst50 * fRec16[2])));
			fRec17[0] = (fTemp1 - ((fConst52 * fRec17[1]) + (fConst53 * fRec17[2])));
			fRec18[0] = (fTemp1 - ((fConst55 * fRec18[1]) + (fConst56 * fRec18[2])));
			fRec19[0] = (fTemp1 - ((fConst58 * fRec19[1]) + (fConst59 * fRec19[2])));
			fRec20[0] = (fTemp1 - ((fConst61 * fRec20[1]) + (fConst62 * fRec20[2])));
			fRec21[0] = (fTemp1 - ((fConst64 * fRec21[1]) + (fConst65 * fRec21[2])));
			fRec22[0] = (fTemp1 - ((fConst67 * fRec22[1]) + (fConst68 * fRec22[2])));
			fRec23[0] = (fTemp1 - ((fConst70 * fRec23[1]) + (fConst71 * fRec23[2])));
			fRec24[0] = (fTemp1 - ((fConst73 * fRec24[1]) + (fConst74 * fRec24[2])));
			fRec25[0] = (fTemp1 - ((fConst76 * fRec25[1]) + (fConst77 * fRec25[2])));
			fRec26[0] = (fTemp1 - ((fConst79 * fRec26[1]) + (fConst80 * fRec26[2])));
			fRec27[0] = (fTemp1 - ((fConst82 * fRec27[1]) + (fConst83 * fRec27[2])));
			fRec28[0] = (fTemp1 - ((fConst85 * fRec28[1]) + (fConst86 * fRec28[2])));
			fRec29[0] = (fTemp1 - ((fConst88 * fRec29[1]) + (fConst89 * fRec29[2])));
			fRec30[0] = (fTemp1 - ((fConst91 * fRec30[1]) + (fConst92 * fRec30[2])));
			fRec31[0] = (fTemp1 - ((fConst94 * fRec31[1]) + (fConst95 * fRec31[2])));
			fRec32[0] = (fTemp1 - ((fConst97 * fRec32[1]) + (fConst98 * fRec32[2])));
			fRec33[0] = (fTemp1 - ((fConst100 * fRec33[1]) + (fConst101 * fRec33[2])));
			fRec34[0] = (fTemp1 - ((fConst103 * fRec34[1]) + (fConst104 * fRec34[2])));
			fRec35[0] = (fTemp1 - ((fConst106 * fRec35[1]) + (fConst107 * fRec35[2])));
			fRec36[0] = (fTemp1 - ((fConst109 * fRec36[1]) + (fConst110 * fRec36[2])));
			fRec37[0] = (fTemp1 - ((fConst112 * fRec37[1]) + (fConst113 * fRec37[2])));
			fRec38[0] = (fTemp1 - ((fConst115 * fRec38[1]) + (fConst116 * fRec38[2])));
			fRec39[0] = (fTemp1 - ((fConst118 * fRec39[1]) + (fConst119 * fRec39[2])));
			fRec40[0] = (fTemp1 - ((fConst121 * fRec40[1]) + (fConst122 * fRec40[2])));
			fRec41[0] = (fTemp1 - ((fConst124 * fRec41[1]) + (fConst125 * fRec41[2])));
			fRec42[0] = (fTemp1 - ((fConst127 * fRec42[1]) + (fConst128 * fRec42[2])));
			fRec43[0] = (fTemp1 - ((fConst130 * fRec43[1]) + (fConst131 * fRec43[2])));
			fRec44[0] = (fTemp1 - ((fConst133 * fRec44[1]) + (fConst134 * fRec44[2])));
			fRec45[0] = (fTemp1 - ((fConst136 * fRec45[1]) + (fConst137 * fRec45[2])));
			fRec46[0] = (fTemp1 - ((fConst139 * fRec46[1]) + (fConst140 * fRec46[2])));
			fRec47[0] = (fTemp1 - ((fConst142 * fRec47[1]) + (fConst143 * fRec47[2])));
			fRec48[0] = (fTemp1 - ((fConst145 * fRec48[1]) + (fConst146 * fRec48[2])));
			fRec49[0] = (fTemp1 - ((fConst148 * fRec49[1]) + (fConst149 * fRec49[2])));
			fRec50[0] = (fTemp1 - ((fConst151 * fRec50[1]) + (fConst152 * fRec50[2])));
			fRec51[0] = (fTemp1 - ((fConst154 * fRec51[1]) + (fConst155 * fRec51[2])));
			fRec52[0] = (fTemp1 - ((fConst157 * fRec52[1]) + (fConst158 * fRec52[2])));
			fRec53[0] = (fTemp1 - ((fConst160 * fRec53[1]) + (fConst161 * fRec53[2])));
			float fTemp2 = (0.0199999996f * ((((((((((((fRec0[0] - fRec0[2]) * fSlow13) + (((((((((((((((((((((((((((((((((((((((((fRec5[0] - fRec5[2]) * fSlow14) + ((fRec6[0] - fRec6[2]) * fSlow15)) + ((fRec7[0] - fRec7[2]) * fSlow16)) + ((fRec8[0] - fRec8[2]) * fSlow17)) + ((fRec9[0] - fRec9[2]) * fSlow18)) + ((fRec10[0] - fRec10[2]) * fSlow19)) + ((fRec11[0] - fRec11[2]) * fSlow20)) + ((fRec12[0] - fRec12[2]) * fSlow21)) + ((fRec13[0] - fRec13[2]) * fSlow22)) + ((fRec14[0] - fRec14[2]) * fSlow23)) + ((fRec15[0] - fRec15[2]) * fSlow24)) + ((fRec16[0] - fRec16[2]) * fSlow25)) + ((fRec17[0] - fRec17[2]) * fSlow26)) + ((fRec18[0] - fRec18[2]) * fSlow27)) + ((fRec19[0] - fRec19[2]) * fSlow28)) + ((fRec20[0] - fRec20[2]) * fSlow29)) + ((fRec21[0] - fRec21[2]) * fSlow30)) + ((fRec22[0] - fRec22[2]) * fSlow31)) + ((fRec23[0] - fRec23[2]) * fSlow32)) + ((fRec24[0] - fRec24[2]) * fSlow33)) + ((fRec25[0] - fRec25[2]) * fSlow34)) + ((fRec26[0] - fRec26[2]) * fSlow35)) + ((fRec27[0] - fRec27[2]) * fSlow36)) + ((fRec28[0] - fRec28[2]) * fSlow37)) + ((fRec29[0] - fRec29[2]) * fSlow38)) + ((fRec30[0] - fRec30[2]) * fSlow39)) + ((fRec31[0] - fRec31[2]) * fSlow40)) + ((fRec32[0] - fRec32[2]) * fSlow41)) + ((fRec33[0] - fRec33[2]) * fSlow42)) + ((fRec34[0] - fRec34[2]) * fSlow43)) + ((fRec35[0] - fRec35[2]) * fSlow44)) + ((fRec36[0] - fRec36[2]) * fSlow45)) + ((fRec37[0] - fRec37[2]) * fSlow46)) + ((fRec38[0] - fRec38[2]) * fSlow47)) + ((fRec39[0] - fRec39[2]) * fSlow48)) + ((fRec40[0] - fRec40[2]) * fSlow49)) + ((fRec41[0] - fRec41[2]) * fSlow50)) + ((fRec42[0] - fRec42[2]) * fSlow51)) + ((fRec43[0] - fRec43[2]) * fSlow52)) + ((fRec44[0] - fRec44[2]) * fSlow53))) + ((fRec45[0] - fRec45[2]) * fSlow54)) + ((fRec46[0] - fRec46[2]) * fSlow55)) + ((fRec47[0] - fRec47[2]) * fSlow56)) + ((fRec48[0] - fRec48[2]) * fSlow57)) + ((fRec49[0] - fRec49[2]) * fSlow58)) + ((fRec50[0] - fRec50[2]) * fSlow59)) + ((fRec51[0] - fRec51[2]) * fSlow60)) + ((fRec52[0] - fRec52[2]) * fSlow61)) + ((fRec53[0] - fRec53[2]) * fSlow62)));
			output0[i] = FAUSTFLOAT(fTemp2);
			output1[i] = FAUSTFLOAT(fTemp2);
			iRec3[1] = iRec3[0];
			fRec2[2] = fRec2[1];
			fRec2[1] = fRec2[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fVec0[1] = fVec0[0];
			fVec1[1] = fVec1[0];
			fRec4[1] = fRec4[0];
			fRec0[2] = fRec0[1];
			fRec0[1] = fRec0[0];
			fRec5[2] = fRec5[1];
			fRec5[1] = fRec5[0];
			fRec6[2] = fRec6[1];
			fRec6[1] = fRec6[0];
			fRec7[2] = fRec7[1];
			fRec7[1] = fRec7[0];
			fRec8[2] = fRec8[1];
			fRec8[1] = fRec8[0];
			fRec9[2] = fRec9[1];
			fRec9[1] = fRec9[0];
			fRec10[2] = fRec10[1];
			fRec10[1] = fRec10[0];
			fRec11[2] = fRec11[1];
			fRec11[1] = fRec11[0];
			fRec12[2] = fRec12[1];
			fRec12[1] = fRec12[0];
			fRec13[2] = fRec13[1];
			fRec13[1] = fRec13[0];
			fRec14[2] = fRec14[1];
			fRec14[1] = fRec14[0];
			fRec15[2] = fRec15[1];
			fRec15[1] = fRec15[0];
			fRec16[2] = fRec16[1];
			fRec16[1] = fRec16[0];
			fRec17[2] = fRec17[1];
			fRec17[1] = fRec17[0];
			fRec18[2] = fRec18[1];
			fRec18[1] = fRec18[0];
			fRec19[2] = fRec19[1];
			fRec19[1] = fRec19[0];
			fRec20[2] = fRec20[1];
			fRec20[1] = fRec20[0];
			fRec21[2] = fRec21[1];
			fRec21[1] = fRec21[0];
			fRec22[2] = fRec22[1];
			fRec22[1] = fRec22[0];
			fRec23[2] = fRec23[1];
			fRec23[1] = fRec23[0];
			fRec24[2] = fRec24[1];
			fRec24[1] = fRec24[0];
			fRec25[2] = fRec25[1];
			fRec25[1] = fRec25[0];
			fRec26[2] = fRec26[1];
			fRec26[1] = fRec26[0];
			fRec27[2] = fRec27[1];
			fRec27[1] = fRec27[0];
			fRec28[2] = fRec28[1];
			fRec28[1] = fRec28[0];
			fRec29[2] = fRec29[1];
			fRec29[1] = fRec29[0];
			fRec30[2] = fRec30[1];
			fRec30[1] = fRec30[0];
			fRec31[2] = fRec31[1];
			fRec31[1] = fRec31[0];
			fRec32[2] = fRec32[1];
			fRec32[1] = fRec32[0];
			fRec33[2] = fRec33[1];
			fRec33[1] = fRec33[0];
			fRec34[2] = fRec34[1];
			fRec34[1] = fRec34[0];
			fRec35[2] = fRec35[1];
			fRec35[1] = fRec35[0];
			fRec36[2] = fRec36[1];
			fRec36[1] = fRec36[0];
			fRec37[2] = fRec37[1];
			fRec37[1] = fRec37[0];
			fRec38[2] = fRec38[1];
			fRec38[1] = fRec38[0];
			fRec39[2] = fRec39[1];
			fRec39[1] = fRec39[0];
			fRec40[2] = fRec40[1];
			fRec40[1] = fRec40[0];
			fRec41[2] = fRec41[1];
			fRec41[1] = fRec41[0];
			fRec42[2] = fRec42[1];
			fRec42[1] = fRec42[0];
			fRec43[2] = fRec43[1];
			fRec43[1] = fRec43[0];
			fRec44[2] = fRec44[1];
			fRec44[1] = fRec44[0];
			fRec45[2] = fRec45[1];
			fRec45[1] = fRec45[0];
			fRec46[2] = fRec46[1];
			fRec46[1] = fRec46[0];
			fRec47[2] = fRec47[1];
			fRec47[1] = fRec47[0];
			fRec48[2] = fRec48[1];
			fRec48[1] = fRec48[0];
			fRec49[2] = fRec49[1];
			fRec49[1] = fRec49[0];
			fRec50[2] = fRec50[1];
			fRec50[1] = fRec50[0];
			fRec51[2] = fRec51[1];
			fRec51[1] = fRec51[0];
			fRec52[2] = fRec52[1];
			fRec52[1] = fRec52[0];
			fRec53[2] = fRec53[1];
			fRec53[1] = fRec53[0];
			
		}
		
	}

	
};

#endif
