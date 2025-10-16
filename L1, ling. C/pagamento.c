#include <stdio.h>
#include <string.h>
char nome [50];
double valor_hora,horas_trabalhadas,valor_pagamento;
int main()
{
    printf("Digite o nome da(o) funcionaria(o): ");
    scanf("%s", &nome[50]);
    printf("Digite o valor recebido por hora: ");
    scanf("%lf", &valor_hora);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%lf", &horas_trabalhadas);
    valor_pagamento=valor_hora*horas_trabalhadas;
    printf("O pagamento da(o) funcionaria(o), de acordo com as horas trabalhadas, deve ser de: %.2lf\n", valor_pagamento);
    return 0;
}