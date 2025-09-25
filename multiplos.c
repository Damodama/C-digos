#include <stdio.h>
int main()
{
    int x, y;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    if (x % y == 0)
    {
        printf("Eles sao multiplos");
    } 
    else 
    {
        printf("Eles nao sao multiplos");
    }
    return 0;
}