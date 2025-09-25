#include <stdio.h>
int main()
{
    int i,j,temp,matriz[3][3];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("Digite o elemento a%d%d da matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        temp=matriz[i][0];
        matriz[i][0]=matriz[i][2];
        matriz[i][2]=temp;
    }
    printf("Matriz com linhas invertidas:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}