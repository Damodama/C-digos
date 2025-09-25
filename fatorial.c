#include <stdio.h>
int main()
{
    int i,numero,fatorial;
    fatorial=1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero<0)
    {
        printf("Fatorial nao esta definido para numeros negativos.");
    }
    else
    {
        for (i=1;i<=numero;i++)
        {
            fatorial*=i;
        }
        printf("O fatorial de %d e %d", numero,fatorial);
    }
    return 0;
}