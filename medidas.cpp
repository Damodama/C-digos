#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double A,B,C;
    double area_quadrado,area_triangulo,area_trapezio;
    cout << "Digite a medida A: " << endl;
    cin >> A;
    cout << "Digite a medida B: " << endl;
    cin >> B;
    cout << "Digite a medida C: " << endl;
    cin >> C;
    area_quadrado=A*A;
    area_triangulo=(A*B)/2.0;
    area_trapezio=((A+B)*C)/2.0;
    cout << fixed << setprecision(4);
    cout << "Area do quadrado e: " << area_quadrado << endl;
    cout << "Area do triangulo e: " << area_triangulo << endl;
    cout << "Area do trapezio e: " << area_trapezio << endl;
    return 0;
}