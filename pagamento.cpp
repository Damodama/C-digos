#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;
int main()
{
    string nome;
    double valor_hora,pagamento;
    int horas_trabalhadas;
    cout << "Nome do(a) funcionario(a): " << endl;
    getline(cin, nome);
    cout << "Valor por hora de " << nome << ": " << endl;
    cin >> valor_hora;
    cout << "Horas trabalhadas por " << nome << ": " << endl;
    cin >> horas_trabalhadas;
    pagamento=valor_hora*horas_trabalhadas;
    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser R$ " << pagamento << endl;
    return 0;
}