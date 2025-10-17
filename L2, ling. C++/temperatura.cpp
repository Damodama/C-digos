#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char escala;
    double temperatura, convertida;
    cout << "Digite a escala da temperatura (C ou F): " << endl;
    cin >> escala;
    cout << "Digite a temperatura: " << endl;
    cin >> temperatura;
    cout << fixed << setprecision(2);
    if (escala=='F'||escala=='f')
    {
        convertida=(5.0/9.0)*(temperatura-32.0);
        cout << "Temperatura em Celsius: " << convertida << " °C" << endl;
    }
    else if (escala=='C'||escala=='c')
    {
        convertida=(temperatura*9.0/5.0)+32.0;
        cout << "Temperatura em Fahrenheit: " << convertida << " °F" << endl;
    }
    else
    {
        cout << "Escala invalida. Use apenas C ou F." << endl;
    }
    return 0;
}