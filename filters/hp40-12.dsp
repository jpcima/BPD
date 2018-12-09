// generated automatically
// DO NOT MODIFY!
declare id "hp40-12";
declare name "HP40-12";
declare category "External";

import("stdfaust.lib");

process = pre : fi.iir((b0/a0,b1/a0,b2/a0),(a1/a0,a2/a0)) with {
    LogPot(a, x) = ba.if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    Inverted(b, x) = ba.if(b, 1 - x, x);
    s = 0.993;
    fs = float(ma.SR);
    pre = _;

    
    b0 = 4.32887292020093e-10*pow(fs,2);

    b1 = -8.65774584040187e-10*pow(fs,2);

    b2 = 4.32887292020093e-10*pow(fs,2);

    a0 = fs*(4.32892720044221e-10*fs + 5.44115319341817e-8) + 3.41948527392917e-6;

    a1 = -8.65785440088442e-10*pow(fs,2) + 6.83897054785834e-6;

    a2 = fs*(4.32892720044221e-10*fs - 5.44115319341817e-8) + 3.41948527392917e-6;
};
