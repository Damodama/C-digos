#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i, a, b, proximo;
    a=0;
    b=1;
    cout << "Digite quantos elementos da sequencia de Fibonacci deseja exibir: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Digite um numero positivo." << endl;
    }
    else
    {
        cout << "Sequencia de Fibonacci com " << n << " elementos: ";
        for (i=0; i<n; i++)
        {
            cout << a << " ";
            proximo = a + b;
            a = b;
            b = proximo;
        }
        cout << endl;
    }
    return 0;
}