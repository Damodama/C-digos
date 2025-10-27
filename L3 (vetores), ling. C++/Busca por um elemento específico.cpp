#include <iostream>
using namespace std;
int main()
{
    int i, busca, numero, vetor[10];
    busca = 0;
    for (i=0; i<10; i++)
    {
        cout << "Digite 10 numeros: ";
        cin >> vetor[i];
    }
    cout << "Digite o numero procurado: ";
    cin >> numero;
    for (i=0; i<10; i++)
    {
        if (vetor[i] == numero)
        {
            busca = busca + 1;
        }
    }
    if (busca==0)
    {
        cout << "O numero digitado nao esta presente na sequencia." << endl;
    }
    else
    {
        cout << "O numero digitado esta presente no vetor." << endl;
    }
    return 0;
}