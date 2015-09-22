#include <stdio.h>
#include <stdlib.h>

void q(double **Q)
{
    Q[0][0]=5.0;
    Q[1][0]=5.0;
}
double **qw()
{
    double **Q=(double **)calloc(2, sizeof(double *));
    int i, j;
    for (i=0; i<2; i++)
    {
        Q[i]=(double *)calloc(2, sizeof(double));
    }
    return Q;
}

int main()
{
    double **Q=qw();
    q(&(*Q));
    int i,j;
    for (i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%lf ", Q[i][j]);
        }
        printf("\n");
    }
    return 0;
}
