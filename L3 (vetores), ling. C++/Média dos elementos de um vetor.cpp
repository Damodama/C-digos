#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i;
    double soma, media, numeros[8];
    soma = 0.0;
    cout << "Digite 8 numeros reais:" << endl;
    for (i=0; i<8; i++)
    {
        cin >> numeros[i];
        soma += numeros[i];
    }
    media = soma / 8.0;
    cout << fixed << setprecision(2);
    cout << "A media aritmetica dos valores digitados é: " << media << endl;
    return 0;
}