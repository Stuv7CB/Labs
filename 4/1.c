#include <stdio.h>
#include "gauss.h"
#include "help.h"

int main()
{
    double **a=A();
    double *f=F();
    int n=(int)f[0];
    f++;
    gaussS(a, f, n);
    gaussR(a, f, n);
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%lf ", a[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<n; i++)
    {
        printf("%lf ", f[i]);
    }
    printf("\n");
    return 0;
}
