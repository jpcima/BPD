v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 42600 48300 1 0 0 input-1.sym
{
T 42600 48600 5 10 0 0 0 0 1
device=INPUT
T 42300 48300 5 10 1 1 0 0 1
refdes=IN1
}
C 46700 48300 1 0 0 output-1.sym
{
T 46800 48600 5 10 0 0 0 0 1
device=OUTPUT
T 47500 48300 5 10 1 1 0 0 1
refdes=OUT1
}
C 44700 48300 1 0 0 resistor-2.sym
{
T 45100 48650 5 10 0 0 0 0 1
device=RESISTOR
T 44900 48600 5 10 1 1 0 0 1
refdes=R3
T 44900 48100 5 10 1 1 0 0 1
value=100k
}
C 44500 46400 1 90 0 resistor-2.sym
{
T 44150 46800 5 10 0 0 90 0 1
device=RESISTOR
T 44200 46600 5 10 1 1 90 0 1
refdes=R14
T 44700 46600 5 10 1 1 90 0 1
value=2.2k
}
C 46000 46400 1 90 0 resistor-2.sym
{
T 45650 46800 5 10 0 0 90 0 1
device=RESISTOR
T 45700 46600 5 10 1 1 90 0 1
refdes=R15
T 46200 46600 5 10 1 1 90 0 1
value=22k
}
C 44700 47300 1 0 0 capacitor-1.sym
{
T 44900 48000 5 10 0 0 0 0 1
device=CAPACITOR
T 44900 48200 5 10 0 0 0 0 1
symversion=0.1
T 45000 47800 5 10 1 1 0 0 1
refdes=C6
T 44900 47100 5 10 1 1 0 0 1
value=22n
}
C 46100 47500 1 90 0 capacitor-1.sym
{
T 45400 47700 5 10 0 0 90 0 1
device=CAPACITOR
T 45200 47700 5 10 0 0 90 0 1
symversion=0.1
T 45600 47800 5 10 1 1 90 0 1
refdes=C7
T 46300 47800 5 10 1 1 90 0 1
value=22n
}
C 45300 46200 1 180 0 vdd-1.sym
{
T 45300 46200 5 10 0 0 180 0 1
device=POWER
T 45300 46200 5 10 0 0 180 0 1
refdes=Vdd3
T 45000 46200 5 10 1 1 180 0 1
value=4.5V
}
N 44400 46400 44400 46300 4
N 44400 46300 45900 46300 4
N 45900 46300 45900 46400 4
N 45600 48400 46700 48400 4
N 44400 47300 44400 47500 4
N 44400 47500 44700 47500 4
N 45600 47500 45900 47500 4
N 45900 47500 45900 47300 4
N 45100 46300 45100 46200 4
C 44600 47500 1 90 0 capacitor-1.sym
{
T 44800 47800 5 10 1 1 90 0 1
value=22n
T 43900 47700 5 10 0 0 90 0 1
device=CAPACITOR
T 44100 47800 5 10 1 1 90 0 1
refdes=C5
T 43700 47700 5 10 0 0 90 0 1
symversion=0.1
}
N 43400 48400 44700 48400 4
