#include <stdio.h>
int main()
{
    int i,j,matrizA[3][3],matrizB[3][3],matrizS[3][3];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Digite o elemento a%d%d da primeira matriz: ", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Digite o elemento b%d%d da segunda matriz: ", i+1, j+1);
            scanf("%d", &matrizB[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            matrizS[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }
    printf("A matriz resultante da soma e:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ", matrizS[i][j]);
        }
        printf("\n");
    }
    return 0;
}