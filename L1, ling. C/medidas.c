#include <stdio.h>
double A,B,C,area_quadrado,area_triangulo,area_trapezio;;
int main()
{
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);
    area_quadrado=A*A*A*A;
    area_triangulo=(A*B)/2;
    area_trapezio=((A+B)*C)/2;
    printf("A area do quadrado e: %.4lf\n", area_quadrado);
    printf("A area do triangulo e: %.4lf\n", area_triangulo);
    printf("A area do trapezio e: %.4lf\n", area_trapezio);
    return 0;
}