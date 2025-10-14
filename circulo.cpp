#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double r,area,pi;
    pi=3.14159;
    cout << "Digite o valor do raio: " << endl;
    cin >> r;
    area=pi*r*r;
    cout << fixed << setprecision(3);
    cout << "Area = " << area << endl;
    return 0;
}