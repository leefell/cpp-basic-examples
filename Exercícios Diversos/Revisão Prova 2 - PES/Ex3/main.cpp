#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, char** argv) {

    int vetor1[10], vetor2[10];
    float mult = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << " valor do Vetor 1: ";
        cin >> vetor1[i];
    }

    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << " valor do Vetor 2: ";
        cin >> vetor2[i];
    }

    cout << endl;
    cout << "Os valores digitados no Vetor 1 sao: ";
    for (int i = 0; i < 10; i++) {
        if (i == 9) { // para nao mostrar o - depois do ultimo numero
            cout << vetor1[i];
            break;
        }
        cout << vetor1[i] << " - ";
    }

    cout << endl;
    cout << "Os valores digitados no Vetor 2 sao: ";
    for (int i = 0; i < 10; i++) {
        if (i == 9) { // para nao mostrar o - depois do ultimo numero
            cout << vetor2[i];
            break;
        }
        cout << vetor2[i] << " - ";
    }
    cout << endl;
    cout << "OS valores dos vetores multiplicados sao: ";
    for (int i = 0; i < 10; i++) {
        if (i == 9) { // para nao mostrar o - depois do ultimo numero
            cout << mult;
            break;
        }
        mult = vetor1[i] * vetor2[i];
        cout << mult << " - ";
    }
    cout << endl;

    return 0;
}

