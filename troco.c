#include <stdio.h>
double preco, dinheiro, troco;
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
    printf("Troco = %.2lf\n", troco);
	return 0;
}