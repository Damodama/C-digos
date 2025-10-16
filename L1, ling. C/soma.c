#include <stdio.h>
int x,y,soma;;
int main()
{
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    soma=x+y;
    printf("A soma de x e y e: %.2d\n", soma);
    return 0;
}