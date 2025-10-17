#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo numero: " << endl;
    cin >> n2;
    if (n1%n2==0||n2%n1==0)
    {
        cout << "Os numeros sao multiplos entre si." << endl;
    }
    else
    {
        cout << "Os numeros nao sao multiplos entre si." << endl;
    }
    return 0;
}