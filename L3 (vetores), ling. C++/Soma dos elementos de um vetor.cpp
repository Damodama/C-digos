#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, soma, vetor[10];
    soma=0;
    cout << "Digite 10 numeros inteiros:" << endl;
    for (i=0; i<10; i++)
    {
        cin >> vetor[i];
        soma += vetor[i];
    }
    cout << "A soma dos numeros digitados e: " << soma << endl;
    return 0;
}