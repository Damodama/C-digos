#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int i, maior, menor, vetor[15];
    maior = INT_MIN;
    menor = INT_MAX;
    cout << "Digite 15 numeros inteiros:" << endl;
    for (i=0; i<15; i++)
    {
        cin >> vetor[i];
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    cout << "O maior valor digitado foi: " << maior << endl;
    cout << "O menor valor digitado foi: " << menor << endl;
    return 0;
}