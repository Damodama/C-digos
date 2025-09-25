#include <stdio.h>
double t1,t2,t3;
int main() 
{
    printf("Digite a distancia da primeira, segunda e terceira tentativa: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    if (t2>t1||t2>t3) 
    {
       printf("A maior distancia foi: %.2lf metros", t2); 
    }
    else if (t3>t1||t3>t2) 
    {
        printf("A maior distancia foi: %.2lf metros", t3);
    }
    else
    {
       printf("A maior distancia foi: %.2lf metros", t1);
    return 0;
    }
}