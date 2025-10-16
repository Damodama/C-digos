#include <stdio.h>
double distancia,combustivel,consumo_medio;
int main()
{
    printf("Digite a distancia total percorrida em km: ");
    scanf("%lf", &distancia);
    printf("Digite a quantidade de litros de combustivel gasta: ");
    scanf("%lf", &combustivel);
    consumo_medio=distancia/combustivel;
    printf("O consumo medio do carro e: %.3lf km/l\n", consumo_medio);
    return 0;
}