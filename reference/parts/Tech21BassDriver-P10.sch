v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 42500 46800 1 0 0 input-1.sym
{
T 42500 47100 5 10 0 0 0 0 1
device=INPUT
T 42200 46800 5 10 1 1 0 0 1
refdes=IN1
}
C 47200 47000 1 0 0 output-1.sym
{
T 47300 47300 5 10 0 0 0 0 1
device=OUTPUT
T 48000 47000 5 10 1 1 0 0 1
refdes=OUT1
}
C 43800 46800 1 0 0 resistor-2.sym
{
T 44200 47150 5 10 0 0 0 0 1
device=RESISTOR
T 44000 47100 5 10 1 1 0 0 1
refdes=R33
T 44000 46600 5 10 1 1 0 0 1
value=10k
}
C 45600 47600 1 0 0 vcc-1.sym
{
T 45600 47600 5 10 0 0 0 0 1
device=POWER
T 45600 47600 5 10 0 0 0 0 1
refdes=Vcc8
T 45900 47600 5 10 1 1 0 0 1
value=9V
}
C 45600 46400 1 0 0 ground.sym
N 45800 47600 45800 47500 4
C 44800 47700 1 0 0 vdd-1.sym
{
T 44800 47700 5 10 0 0 0 0 1
device=POWER
T 44800 47700 5 10 0 0 0 0 1
refdes=Vdd10
T 45100 47700 5 10 1 1 0 0 1
value=4.5V
}
C 45500 44900 1 0 0 resistor-2.sym
{
T 45900 45250 5 10 0 0 0 0 1
device=RESISTOR
T 45700 45200 5 10 1 1 0 0 1
refdes=R29
T 45700 44700 5 10 1 1 0 0 1
value=22k
}
C 45500 45600 1 0 0 capacitor-1.sym
{
T 45700 46300 5 10 0 0 0 0 1
device=CAPACITOR
T 45700 46500 5 10 0 0 0 0 1
symversion=0.1
T 45800 46100 5 10 1 1 0 0 1
refdes=C22
T 45800 45400 5 10 1 1 0 0 1
value=33p
}
N 45500 45800 45300 45800 4
N 45500 45000 45300 45000 4
N 46400 45800 46500 45800 4
N 46400 45000 46500 45000 4
C 45300 46700 1 0 0 opamp-1.sym
{
T 46000 47500 5 10 0 0 0 0 1
device=OPAMP
T 46000 48100 5 10 0 0 0 0 1
symversion=0.1
T 45300 46700 5 10 0 1 0 0 1
value=Vcc=10,Vee=-10,A=1e5
T 46000 47300 5 10 1 1 0 0 1
refdes=U2B
}
N 46500 45000 46500 47100 4
N 46300 47100 47200 47100 4
N 45300 45000 45300 46900 4
N 43300 46900 43800 46900 4
N 44700 46900 45300 46900 4
N 45000 47700 45000 47300 4
N 45000 47300 45300 47300 4
