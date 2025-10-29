#include <iostream>
using namespace std;
int main()
{
    int i, j, matriz[3][2];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "Digite o elemento a" << i + 1 << j + 1 << " da matriz: ";
            cin >> matriz[i][j];
        }
    }
    cout << "A transposta da matriz digitada e:" << endl;
    for (j=0; j<2; j++)
    {
        for (i=0; i<3; i++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}