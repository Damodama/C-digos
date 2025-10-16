#include <stdio.h>
int tempo_total,horas,minutos,segundos;
int main()
{
    printf("Digite a duracao do tempo em segundos: ");
    scanf("%d", &tempo_total);
    horas=tempo_total/3600;
    minutos=(tempo_total%3600)/60;
    segundos=tempo_total%60;
    printf("A duracao formatada e: %d:%d:%d\n", horas, minutos, segundos);
    return 0;
}