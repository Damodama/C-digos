#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double base,altura,area,perimetro,diagonal;
    cout << "Digite a medida da base do retangulo: ";
    cin >> base;
    cout << "Digite a medida da altura do retangulo: ";
    cin >> altura;
    area=base*altura;
    perimetro=2*(base+altura);
    diagonal = sqrt(base*base+altura*altura);
    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;
    return 0;
}