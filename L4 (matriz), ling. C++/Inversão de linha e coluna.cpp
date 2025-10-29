#include <iostream>
using namespace std;
int main()
{
    int i, j, temp, matriz[3][3];
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
        temp = matriz[i][0];
        matriz[i][0] = matriz[i][2];
        matriz[i][2] = temp;
    }
    cout << "Matriz com linhas invertidas:" << endl;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}