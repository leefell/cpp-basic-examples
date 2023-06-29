#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {

    int qtd;
    int matriz[qtd][qtd];


    cout << "Digite a quantidade de linhas e colunas desejadas: ";
    cin >> qtd;

    for (int i = 0; i < qtd; i++) {
        for (int j = 0; j < qtd; j++) {
            cout << "Digite um valor para a posicao " << i + 1 << ", " << j + 1 << " da matriz: " << endl;
            cin >> matriz[i][j];
        }
    }

    cout << endl;
    cout << "Os valores da matriz sao: " << endl;

    for (int i = 0; i < qtd; i++) {
        for (int j = 0; j < qtd; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Os valores da matriz sem a primeira linha e a primeira coluna sao: " << endl;

    for (int i = 1; i < qtd; i++) {
        for (int j = 1; j < qtd; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}

