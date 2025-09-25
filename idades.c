#include <stdio.h>
#include <string.h>
char nome1,nome2 [50];
int idade1,idade2;
double media;
int main()
{
    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", &nome1);
    printf("Digite a idade dessa pessoa: ");
    scanf("%d", &idade1);
    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", &nome2);
    printf("Digite a idade dessa pessoa: ");
    scanf("%d", &idade2);
    media=(idade1+idade2)/2;
    printf("A idade media entre essas pessoas e: %.1lf\n", media);
    return 0;
}