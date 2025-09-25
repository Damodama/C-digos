#include <stdio.h>
#include <math.h>
double A,B,C,x1,x2,D;
int main()
{
    printf("Digite o valor do coeficiente A: ");
    scanf("%lf", &A);
    printf("Digite o valor do coeficiente B: ");
    scanf("%lf", &B);
    printf("Digite o valor do coeficiente C: ");
    scanf("%lf", &C);
    D=(B*B)-(4*A*C);
    if (D>0)
    {
        x1=(-B+sqrt(D))/(2*A);
        x2=(-B-sqrt(D))/(2*A);
        printf("As raizes sao x1=%lf e x2=%lf",x1,x2);
    }
    else if (D=0)
    {
        x1=(-B)/(2*A);
        printf("A unica raiz e x1=%lf",x1);
    }
    else
    {
        printf("A equacao nao tem raiz real");
    }
    return 0;
}