#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int minutos;
    double valor;
    cout << "Digite a quantidade de minutos consumidos: " << endl;
    cin >> minutos;
    if (minutos<=100)
    {
        valor=50.00;
    }
    else
    {
        valor=50.00+(minutos-100)*2.00;
    }
    cout << fixed << setprecision(2);
    cout << "O valor a pagar e: R$ " << valor << endl;
    return 0;
}