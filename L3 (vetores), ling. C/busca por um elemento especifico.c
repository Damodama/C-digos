#include <stdio.h>
int main()
{
    int i,busca,numero,vetor[10];
    for (i=0;i<10;i++)
    {
        printf("Digite 10 numeros: ");
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero procurado: ");
    scanf("%d", &numero);
    for (i=0;i<10;i++)
    {
        if (vetor[i]==numero)
        {
            busca=busca+1;
        }
    }
    if (busca==0)
    {
        printf("O numero digitado não esta presente na sequencia");
    }
    else
    {
        printf("O numero digitado esta presente no vetor.");
    }
    return 0;
}