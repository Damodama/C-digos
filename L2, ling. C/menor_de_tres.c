#include <stdio.h>
int x,y,z;
int main() 
{
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &x,&y,&z);
    if (y<x||y<z)
    {
        printf("O menor numero e: %d\n", y);
    }
    else if (z<y||z<x)
    {
        printf("O menor numero e: %d\n", z);
    }
    else 
    {
        printf("O menor numero e: %d\n", x);
    }
    return 0;   
}