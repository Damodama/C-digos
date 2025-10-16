#include <stdio.h>
int main()
{
    int i,j,numero,contador=0,matriz[4][4];
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("Digite o elemento a%d%d da matriz: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o numero que deseja contar: ");
    scanf("%d", &numero);
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            if (matriz[i][j]==numero)
            {
                contador++;
            }
        }
    }
    printf("O numero %d aparece %d vez(es) na matriz.\n", numero, contador);
    return 0;
}