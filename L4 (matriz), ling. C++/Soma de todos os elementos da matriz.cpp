#include <iostream>
#include <iomanip>
using namespace std;
int somaMatriz(int matriz[3][3])
{
    int i, j, soma;
    soma = 0;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}
int main()
{
    int i, j, resultado, matriz[3][3];
    cout << "Digite os elementos da matriz 3x3:" << endl;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    resultado = somaMatriz(matriz);
    cout << fixed << setprecision(0);
    cout << "A soma dos elementos da matriz é: " << resultado << endl;

    return 0;
}