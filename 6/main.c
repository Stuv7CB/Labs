#include <stdio.h>
#include "gauss.h"
#include <stdlib.h>

int main()
{
    double *x;
    double *y;
    char c;
    FILE *file;
    file=fopen("1.csv", "r");
    int n=1;
    do
    {
        c=fgetc(file);
        if(c==' ')
        {
            n++;
        }
    }
    while(c!='\n'&&c!='\r');
    rewind(file);
    int i;
    x=(double *)malloc(n*sizeof(double));
    y=(double *)malloc(n*sizeof(double));
    for(i=0; i<n;i++)
    {
        fscanf(file, "%lf", &x[i]);
    }
    for(i=0; i<n;i++)
    {
        fscanf(file, "%lf", &y[i]);
    }
    double *f=(double *)malloc(n*sizeof(double));
    double **A=(double **)calloc(n, sizeof(double*));
    A[0]=(double *)calloc(n, sizeof(double));
    A[1]=(double *)calloc(n, sizeof(double));
    for (i=0; i<n; i++)
    {
        A[0][0]+=x[i]*x[i];
        A[0][1]+=x[i];
        A[1][0]+=x[i];
        A[1][1]++;
        f[0]+=x[i]*y[i];
        f[1]+=y[i];
    }
    gaussS(A, f, 2);
    gaussR(A, f, 2);
    printf("a=%lf\nb=%lf\n", f[0], f[1]);
    fprintf(fopen("out", "w"),"%lf\n%lf", f[0],f[1]);
    return 0;
}
