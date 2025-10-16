#include <stdio.h>
int main()
{
    int i,j,vetor1[5],vetor2[5],intercalado[10];
    j=0;
    printf("Digite 5 numeros para o primeiro vetor: ");
    for (i=0;i<5;i++)
    {
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }
    printf("Digite 5 numeros para o segundo vetor: ");
    for (i=0;i<5;i++)
    {
        printf("vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }
    for (i=0;i<5;i++)
    {
        intercalado[j++]=vetor1[i];
        intercalado[j++]=vetor2[i];
    }
    printf("Vetor intercalado: ");
    for (i=0;i<10;i++)
    {
        printf("%d ", intercalado[i]);
    }
    return 0;
}