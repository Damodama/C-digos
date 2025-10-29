#include <iostream>
using namespace std;
int main()
{
    int i, j, numero, contador = 0;
    int matriz[4][4];
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            cout << "Digite o elemento a" << i + 1 << j + 1 << " da matriz: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Digite o numero que deseja contar: ";
    cin >> numero;
    for (i=0; i<4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] == numero)
            {
                contador++;
            }
        }
    }
    cout << "O numero " << numero << " aparece " << contador << " vez(es) na matriz." << endl;
    return 0;
}