#include <stdio.h>
#include <stdlib.h>
#include "function.h"

double square(double h, double a0, double a1);
double trapeze(double h, double a0, double a1);
double stevenson(double h, double a0, double a1);

int main(int argc, char *argv[])
{
    if(argc<5)
    {
        fprintf(stderr, "Not enough params\n");
        return -1;
    }
    int type=atoi(argv[1]);
    double h=atof(argv[2]);
    double a0=atof(argv[3]);
    double a1=atof(argv[4]);
    double I;
    if(type==0)
    {
        I=square(h, a0, a1);
    }
    if(type==1)
    {
        I=trapeze(h, a0, a1);
    }
    if(type==2)
    {
        I=stevenson(h, a0, a1);
    }
    printf("Integral: %lf\n", I);
    return 0;
}

double square(double h, double a0, double a1)
{
    double i, I;
    I=0.0;
    for (i=a0; i<a1; i+=h)
    {
        I+=f(i+0.5*h);
    }
    I*=h;
    return I;
}

double trapeze(double h, double a0, double a1)
{
    double i, I;
    I=0.0;
    for (i=a0; i<a1; i+=h)
    {
        I+=f(i)+f(i+h);
    }
    I*=0.5*h;
    return I;
}

double stevenson(double h, double a0, double a1)
{
    double i, I;
    I=0.0;
    for (i=a0; i<a1; i+=h)
    {
        I=I+f(i)+4*f(i+0.5*h)+f(i+h);
    }
    I=(I*h)/6.0;
    return I;
}
