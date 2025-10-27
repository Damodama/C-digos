#include <iostream>
using namespace std;
int main()
{
    int i,vetor[10], inverso[10];
    for (i=0; i<10; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }
    for (i=0; i<10; i++)
    {
        inverso[i] = vetor[9 - i];
    }
    cout << "Vetor original: ";
    for (i=0; i<10; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl << "Vetor invertido: ";
    for (int i = 0; i < 10; i++)
    {
        cout << inverso[i] << " ";
    }
    cout << endl;
    return 0;
}