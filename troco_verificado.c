#include <stdio.h>
double preco,dinheiro,troco;
int qtd;
int main()
{
    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);
    troco=dinheiro-(preco*qtd); 
    if (troco<0)
    {
        troco=(-troco);
        printf("Faltam R$ %.2lf para a compra", troco);
    }
    else
    {
        printf("Troco = R$ %.2lf\n", troco);
    }
    return 0;
}