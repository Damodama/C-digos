#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, matriz[5][5], soma = 0, linha;

    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            cout << "Digite o elemento a" << i + 1 << j + 1 << " da matriz: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Qual linha voce deseja somar? ";
    cin >> linha;

    if (linha<1 || linha>5)
    {
        cout << "Linha invalida. Digite um valor entre 1 e 5." << endl;
    }
    else
    {
        for (j=0; j<5; j++)
        {
            soma += matriz[linha - 1][j];
        }
        cout << "A soma dos elementos da linha " << linha << " e: " << soma << endl;
    }

    return 0;
}