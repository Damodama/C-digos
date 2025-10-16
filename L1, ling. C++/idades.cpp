#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;
int main ()
{
    string nome1, nome2;
    int idade1, idade2;
    double media;
    cout << "Nome da primeira pessoa: " << endl;
    getline(cin, nome1);
    cout << "Idade de " << nome1 << ": " << endl;
    cin >> idade1;
    cout << "Nome da segunda pessoa: " << endl;
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Idade de " << nome2 << ": " << endl;
    cin >> idade2;
    media=(idade1+idade2)/2.0;
    cout << fixed << setprecision(1);
    cout << "A idade media de" << nome1 << " e " << nome2 << " e de " << media << " anos." << endl;
    return 0;
}