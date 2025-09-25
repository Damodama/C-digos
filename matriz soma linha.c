#include <stdio.h>
int main()
{
    int i,j,matriz[5][5],soma,linha;
    soma=0;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("Digite o elemento a%d%d da matriz:", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Qual linha voce deseja somar?");
    scanf("%d", &linha);
    for (j=0;j<5;j++)
    {
        soma+=matriz[linha-1][j];
    }
    printf("A soma dos elementos da linha %d e: %d\n", linha,soma);
    return 0;
}