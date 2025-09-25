#include <stdio.h>
int main()
{
    int i,j,matriz[3][2];
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Digite o elemento a%d%d da matriz:", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("A trasposta da matriz digitada e:\n");
    for (j=0;j<2;j++)
    {
        for (i=0;i<3;i++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}