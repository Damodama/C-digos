#include <stdio.h>
int main()
{
    int i,j,matriz[3][3],somaPrincipal=0,somaSecundaria=0;
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
        somaPrincipal+=matriz[i][i];
        somaSecundaria+=matriz[i][2-i];
        printf("Soma da diagonal principal: %d\n", somaPrincipal);
        printf("Soma da diagonal secundaria: %d", somaSecundaria);
    }
    return 0;
}