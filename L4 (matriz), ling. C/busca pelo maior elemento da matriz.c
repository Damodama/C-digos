#include <stdio.h>
int main()
{
    int i,j,matriz[4][4],maior=0;
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("Digite o elemento a%d%d da matriz: ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j]>maior)
            {
                maior=matriz[i][j];
            }
        }
    }
    printf("O maior elemento da matriz e: %d\n", maior);
    return 0;
}