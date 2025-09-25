#include <stdio.h>
int main()
{
    int i,vetor1[5],vetor2[5],produto_escalar;
    produto_escalar=0;
    printf("Digite 5 numeros para o primeiro vetor: ");
    for (int i = 0; i < 5; i++) {
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
        produto_escalar+=vetor1[i]*vetor2[i];
    }
    printf("O produto escalar entre os dois vetores e: %d", produto_escalar);
    return 0;
}