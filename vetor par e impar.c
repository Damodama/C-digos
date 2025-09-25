#include <stdio.h>
int main ()
{
    int i,npar,nimpar,vetor[20];
    npar=0;
    nimpar=0;
    for (i=0;i<20;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if(vetor[i]%2==0)
        {
            npar=npar+1;
        }
        else
        {
            nimpar=nimpar+1;
        }
    }    
    printf("Na sequencia existem %d pares e %d impares.", npar, nimpar);
    return 0;
}