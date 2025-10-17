#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double nota1, nota2, nota_final;
    cout << "Digite a nota do primeiro semestre: " << endl;
    cin >> nota1;
    cout << "Digite a nota do segundo semestre: " << endl;
    cin >> nota2;
    nota_final=(nota1+nota2)/2.0;
    cout << fixed << setprecision(1);
    cout << "Nota final do aluno: " << nota_final << endl;
    if (nota_final<60.0)
    {
        cout << "REPROVADO" << endl;
    }
    return 0;
}