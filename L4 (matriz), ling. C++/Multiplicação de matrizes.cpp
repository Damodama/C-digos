#include <iostream>
using namespace std;
int main()
{
    int i, j, k, matrizA[2][2], matrizB[2][2], matrizC[2][2];
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            cout << "Digite o elemento a" << i + 1 << j + 1 << " da matriz A: ";
            cin >> matrizA[i][j];
        }
    }
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            cout << "Digite o elemento b" << i + 1 << j + 1 << " da matriz B: ";
            cin >> matrizB[i][j];
        }
    }
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            matrizC[i][j] = 0;
        }
    }
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            for (k=0; k<2; k++)
            {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    cout << "A matriz resultante da multiplicacao e:" << endl;
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}