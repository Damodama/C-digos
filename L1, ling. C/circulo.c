#include <stdio.h>
double raio,area_circulo;;
int main()
{
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);
    area_circulo=3.14159*(raio*raio);
    printf("A area do circulo e: %.3lf\n", area_circulo);
    return 0;
}