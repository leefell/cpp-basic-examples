#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * Escreva um programa em C++ que receba números e os armazene em uma matriz
4X4. Imprima a matriz
 */
int main(int argc, char** argv) {

    int matriz[4][4];
    int i, j;
    
    for(i = 0; i <= 4; i++){
        for(j = 0; j <= 4; j++){
        cout << "Digite o valor p/ a matriz a posicao [" << i << ", " << j << "]:" << endl;
        cin >> matriz[i][j];
        }
    }
    
    cout << "Os valores da matriz: " << endl;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}

