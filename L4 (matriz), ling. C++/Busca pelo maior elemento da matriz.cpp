#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int i, j, matriz[4][4], maior = INT_MIN;
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            cout << "Digite o elemento a" << i + 1 << j + 1 << " da matriz: ";
            cin >> matriz[i][j];
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }
    cout << "O maior elemento da matriz e: " << maior << endl;

    return 0;
}