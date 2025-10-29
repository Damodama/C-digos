#include <iostream>
using namespace std;
int main()
{
    int i, j, matrizA[3][3], matrizB[3][3], matrizS[3][3];
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << "Digite o elemento a" << i + 1 << j + 1 << " da primeira matriz: ";
            cin >> matrizA[i][j];
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << "Digite o elemento b" << i + 1 << j + 1 << " da segunda matriz: ";
            cin >> matrizB[i][j];
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    cout << "A matriz resultante da soma e:" << endl;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << matrizS[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}