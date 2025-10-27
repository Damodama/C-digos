#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, npar, nimpar, vetor[20];
    npar = 0, nimpar = 0;
    cout << "Digite 20 numeros inteiros:" << endl;
    for (i=0; i<20; i++)
    {
        cin >> vetor[i];
        if (vetor[i] % 2 == 0)
        {
            npar++;
        }
        else
        {
            nimpar++;
        }
    }
    cout << fixed << setprecision(0);
    cout << "Na sequencia existem " << npar << " numeros pares e " << nimpar << " numeros impares." << endl;
    return 0;
}