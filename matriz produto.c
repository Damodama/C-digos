#include <stdio.h>
int main()
{
    int i,j,k,matrizA[2][2],matrizB[2][2],matrizC[2][2];
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Digite o elemento a%d%d da matriz A:", i+1,j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Digite o elemento b%d%d da matriz B:", i+1,j+1);
            scanf("%d", &matrizB[i][j]);
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            matrizC[i][j]=0;
        }
    }
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                for (k=0;k<2;k++)
                {
                    matrizC[i][j]+=matrizA[i][k]*matrizB[k][j];
                }
            }
        }
        printf("A matriz resultante da multiplicacao e:\n");
        for (i=0;i<2;i++)
        {
            for (j=0;j<2;j++)
            {
                printf("%d ", matrizC[i][j]);
            }
            printf("\n");
        }
        return 0;
    }