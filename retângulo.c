#include <stdio.h>
double base,altura,area,perimetro,diagonal;;
int main()
{
    printf("Digite a medida da base do retangulo: ");
    scanf("%lf", &base);
    printf("Digite o medida da altura do retangulo: ");
    scanf("%lf", &altura);
    area=base*altura;
    perimetro=2*base+2*altura;
    diagonal=sqrt(base*base+altura*altura);
    printf("A area do retangulo e: %.2lf\n", area);
    printf("O perimetro do retangulo e: %.2lf\n", perimetro);
    printf("A diagonal do retangulo e; %.2lf\n", diagonal);
    return 0;
}