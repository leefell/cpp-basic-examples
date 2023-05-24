#include <iostream>
//feito na aula
using namespace std;

int main() {
    int num, cont = 0;

    cout << "Digite um número inteiro (0 para sair): ";
    cin >> num;

    while (num != 0) {
        cont = cont + 1;
        cout << "Digite um número inteiro (0 para sair): ";
        cin >> num;
    }

    cout << "Foram digitados " << cont << " números." << endl;

    return 0;
}
