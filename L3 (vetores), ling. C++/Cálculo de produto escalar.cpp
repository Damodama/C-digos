#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, vetor1[5], vetor2[5], produto_escalar;
    produto_escalar = 0;
    cout << "Digite 5 numeros para o primeiro vetor:" << endl;
    for (i=0; i<5; i++)
    {
        cout << "vetor1[" << i << "]: ";
        cin >> vetor1[i];
    }
    cout << "Digite 5 numeros para o segundo vetor:" << endl;
    for (i=0; i<5; i++)
    {
        cout << "vetor2[" << i << "]: ";
        cin >> vetor2[i];
    }
    for (i=0; i<5; i++)
    {
        produto_escalar += vetor1[i] * vetor2[i];
    }
    cout << "O produto escalar entre os dois vetores e: " << produto_escalar << endl;
    return 0;
}