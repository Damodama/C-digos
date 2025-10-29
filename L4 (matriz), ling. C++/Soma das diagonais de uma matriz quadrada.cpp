#include <iostream>
using namespace std;
int main()
{
    int i, j, matriz[3][3], somaPrincipal, somaSecundaria;
    somaPrincipal = 0;
    somaSecundaria = 0;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << "Digite o elemento a" << i + 1 << j + 1 << " da matriz: ";
            cin >> matriz[i][j];
        }
    }
    for (i=0; i<3; i++)
    {
        somaPrincipal += matriz[i][i];
        somaSecundaria += matriz[i][2 - i];
    }
    cout << "Soma da diagonal principal: " << somaPrincipal << endl;
    cout << "Soma da diagonal secundaria: " << somaSecundaria << endl;
    return 0;
}