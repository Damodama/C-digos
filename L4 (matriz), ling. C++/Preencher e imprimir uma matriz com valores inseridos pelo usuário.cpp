#include <iostream>
using namespace std;
int main()
{
    int i, j, matriz[2][2];
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            cout << "Digite o elemento a" << i + 1 << j + 1 << " da matriz: ";
            cin >> matriz[i][j];
        }
    }
    cout << "Matriz 2x2:" << endl;
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}