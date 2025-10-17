#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double t1, t2, t3, maior;
    cout << "Digite a distancia da primeira tentativa: " << endl;
    cin >> t1;
    cout << "Digite a distancia da segunda tentativa: " << endl;
    cin >> t2;
    cout << "Digite a distancia da terceira tentativa: " << endl;
    cin >> t3;
    maior=t1;
    if (t2>maior)
    {
        maior=t2;
    }
    if (t3>maior)
    {
        maior=t3;
    }
    cout << fixed << setprecision(2);
    cout << "A maior distancia alcançada foi: " << maior << " metros." << endl;
    return 0;
}