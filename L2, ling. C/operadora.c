#include <stdio.h>
double valor;
int minutos;
int main()
{
    printf("Digite a quantidade de minutos consumida: " );
    scanf("%d", &minutos);
    if(minutos<=100)
    {
        printf("O valor da conta e R$ 50,00");
    }
    else
    {
        valor=(minutos-100)*2.00+50;
        printf("O valor da conta e R$ %2.lf", valor);
    }
    return 0;
}