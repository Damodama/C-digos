#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double distancia,combustivel,consumo_medio;
    cout << "Distancia total percorrida (km): " << endl;
    cin >> distancia;
    cout << "Total de combustivel gasto (litros): " << endl;
    cin >> combustivel;
    consumo_medio=distancia/combustivel;
    cout << fixed << setprecision(3);
    cout << "O consumo medio e de: " << consumo_medio << " km/l" << endl;
    return 0;
}