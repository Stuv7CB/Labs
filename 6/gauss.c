#include <stdio.h>

void gaussS(double **A, double *f, int n)
{
    int i, j, k;
    for (i=0; i<n; i++)
    {
        f[i]/=A[i][i];
        for (k=i+1; k<n; k++)
        {
            f[k]-=f[i]*(A[k][i]);
        }
        for (j=n-1; j>i-1; j--)
        {
            A[i][j]/=A[i][i];
            for(k=i+1; k<n; k++)
            {
                A[k][j]-=A[i][j]*(A[k][i]);
            }
        }   
    }
}

void gaussR(double **A, double *f, int n)
{
    int i, j, k;
    for (int i=n-1; i>=0; i--)
    {
        for (int j=n-1; j>i; j--)
        {
            f[i]-=A[i][j]*f[j];
        }
    }
}
