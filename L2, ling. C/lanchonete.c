#include <stdio.h>
int codigo, quantidade;
double preco, total;
int main()
{
    printf("Digite o codigo do produto (1 a 5): ");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    if (codigo == 1)
    {
        preco = 5.00;
    }
    else if (codigo == 2)
    {
        preco = 3.50;
    }
    else if (codigo == 3)
    {
        preco = 4.80;
    }
    else if (codigo == 4)
    {
        preco = 8.90;
    }
    else if (codigo == 5)
    {
        preco = 7.32;
    }
    total=preco*quantidade;
    printf("Valor a ser pago: R$ %.2lf\n", total);
    return 0;
}