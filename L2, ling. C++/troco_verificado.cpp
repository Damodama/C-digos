#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double preco_unitario, dinheiro_recebido, total, troco;
    int quantidade;
    cout << "Digite o preco unitario do produto: " << endl;
    cin >> preco_unitario;
    cout << "Digite a quantidade comprada: " << endl;
    cin >> quantidade;
    cout << "Digite o valor em dinheiro dado pelo cliente: " << endl;
    cin >> dinheiro_recebido;
    total=preco_unitario*quantidade;
    cout << fixed << setprecision(2);
    if (dinheiro_recebido>=total)
    {
        troco=dinheiro_recebido-total;
        cout << "Troco a ser devolvido: R$ " << troco << endl;
    }
    else
    {
        troco=total-dinheiro_recebido;
        cout << "O valor restante e: R$ " << troco << endl;
    }
    return 0;
}