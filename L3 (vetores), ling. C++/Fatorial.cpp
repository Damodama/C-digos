#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, numero, fatorial;
    fatorial=1;
    cout << "Digite um numero inteiro: ";
    cin >> numero;
    if (numero < 0)
    {
        cout << "Fatorial nao esta definido para numeros negativos." << endl;
    }
    else
    {
        for (i=1; i<=numero; i++)
        {
            fatorial *= i;
        }
        cout << "O fatorial de " << numero << " e " << fatorial << "." << endl;
    }
    return 0;
}