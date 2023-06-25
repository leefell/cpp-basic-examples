#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int matriz[4][5];
    float metade[4][5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Digite um valor para a posicao " << i + 1 << "," << j + 1<< " da matriz: " << endl;
            cin >> matriz[i][j];
            metade[i][j] = matriz[i][j] / 2.0;
        }
    }

    cout << "Os valores da matriz sao: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nA matriz com os valores resultantes: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << metade[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    
    return 0;
}

