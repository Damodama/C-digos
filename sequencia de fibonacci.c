#include <stdio.h>
int main()
{
    int n,i,a,b,proximo;
    a=0;
    b=1;
    printf("Digite quantos elementos da sequencia de Fibonacci deseja exibir: ");
    scanf("%d", &n);
    if (n<=0)
    {
        printf("Digite um numero positivo: ");
    }
    else
    {
        printf("Sequencia de Fibonacci com %d elementos: ", n);
        for (i=0;i<n;i++)
        {
            printf("%d", a);
            proximo=a+b;
            a=b;
            b=proximo;
        }
    }
    return 0;
}