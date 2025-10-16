#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int duracao,horas,minutos,segundos;
    cout << "Digite a duracao em segundos: " << endl;
    cin >> duracao;
    horas=duracao/3600;
    minutos=(duracao%3600)/60;
    segundos=duracao%60;
    cout << "A duração formada e: ";
    cout << setfill('0') << setw(2) << horas << ":" << setfill('0') << setw(2) << minutos << ":" << setfill('0') << setw(2) << segundos << endl;
    return 0;
}