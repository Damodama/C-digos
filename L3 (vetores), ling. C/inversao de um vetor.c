#include <stdio.h>
int main()
{
    int i,vetor[10],inverso[10];
    for (i=0;i<10;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (i=0;i<10;i++)
    {
        inverso[i]=vetor[9-i];
    }
    printf("Vetor original: ");
    for (i=0;i<10;i++)
    {
        printf("%d",vetor[i]);
    }
    printf("Vetor invertido: ");
    for (i=0;i<10;i++)
    {
        printf("%d", inverso[i]);
    }
    return 0;
}