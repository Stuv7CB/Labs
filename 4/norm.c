#include <malloc.h>

double max(double *s, double n)
{
    double Max=s[0];
    int i;
    for (int i=1; i<n; i++)
    {
        if(Max<s[i])
        {
            Max=s[i];
        }
    }


double firstN(double **A, double n)
{
    double *s=(double *)calloc(n, sizeof(double));
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            s[i]+=A[i][j];
        }
    }
    return max(s, n);
}

double secondN(double **A, double n)
{
    double *s=(double *)calloc(n, sizeof(double));
    int i, j;
    for (j=0; j<n; j++)
    {
        for (i=0; i<n; i++)
        {
            s[j]+=A[i][j];
        }
    }
    return max(s, n);
}
