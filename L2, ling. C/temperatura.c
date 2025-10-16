#include <stdio.h>
char escala;
double temperatura, convertido;
int main()
{
    printf("Digite 'C' para Celsius ou 'F' para Fahrenheit: ");
    scanf(" %c", &escala);
    printf("Digite a temperatura: ");
    scanf("%lf", &temperatura);
    if (escala=='C')
    {
        convertido=(temperatura*9/5)+32;
        printf("Temperatura em Fahrenheit: %.2f°F", convertido);
    }
    else if (escala=='F')
    {
        convertido=(5*(temperatura-32))/9;
        printf("Temperatura em Celsius: %.2f°C", convertido);
    }
    else
    {
        printf("Escala inválida. Use 'C' ou 'F'.");
    }
    return 0;
}