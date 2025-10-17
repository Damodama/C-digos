#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double glicose;
    cout << "Digite a quantidade de glicose no sangue (mg/dl): " << endl;
    cin >> glicose;
    cout << fixed << setprecision(1);
    if (glicose<=100.0)
    {
        cout << "Classificacao: Normal" << endl;
    }
    else if (glicose<=140.0)
    {
        cout << "Classificacao: Elevado" << endl;
    }
    else
    {
        cout << "Classificacao: Diabetes" << endl;
    }
    return 0;
}