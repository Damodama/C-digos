#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double preco_unid,dinheiro_recebido,total,troco;
    int quantidade;
    cout << "Preco unitario do produto: " << endl;
    cin >> preco_unid;
    cout << "Quantidade comprada: " << endl;
    cin >> quantidade;
    cout << "Dinheiro recebido: " << endl;
    cin >> dinheiro_recebido;
    total=preco_unid*quantidade;
    troco = dinheiro_recebido-total;
    cout << fixed << setprecision(2);
    cout << "Troco = R$ " << troco << endl;
    return 0;
}