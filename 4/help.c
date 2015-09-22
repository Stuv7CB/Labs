#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double **A()
{
    FILE *file;
    file=fopen("A", "r");
    int n=0;
    char c;
    do
    {
        c=fgetc(file);
        if(c=='\n')
        {
            n++;
        }
    }
    while(c != EOF);
    double **a=(double **)malloc((n)*sizeof(double*));
    int i;
    for(i=0; i<n; i++)
    {
        a[i]=(double *)malloc((n)*sizeof(double));
    }
    rewind(file);
    int j=0;
    i=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            double b;
            fscanf(file, "%lf", &b);
            a[i][j]=b;
        }
    }
    fclose(file);
    return a;
}

double *F()
{
    FILE *file;
    file=fopen("f", "r");
    char c;
    int n;
    do
    {
        c=fgetc(file);
        if(c==' ')
        {
            n++;
        }
    }
    while(c != EOF);
    double *f=(double *)malloc((n+2)*sizeof(double));
    f[0]=n+1;
    int i;
    rewind(file);
    for (int i=1; i<n+2; i++)
    {
        double b;
        fscanf(file, "%lf", &b);
        f[i]=b;
    }
    return f;
}
