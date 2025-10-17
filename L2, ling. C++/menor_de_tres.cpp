#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, menor;
    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo numero: " << endl;
    cin >> n2;
    cout << "Digite o terceiro numero: " << endl;
    cin >> n3;
    menor=n1;
    if (n2<menor)
    {
        menor=n2;
    }
    if (n3<menor)
    {
        menor=n3;
    }
    cout << "O menor numero e: " << menor << endl;
    return 0;
}