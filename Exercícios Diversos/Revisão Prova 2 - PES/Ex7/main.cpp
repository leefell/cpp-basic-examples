#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int matriz[6][6];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Digite o valor para a posicao [" << i << ", " << j << "] da matriz: " << endl;
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Os valores da diagonal secundario sao: " << endl;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(i + j == 6-1){
                cout << matriz[i][j] << "       ";
            }else{
                cout << "       ";
            }
        }
        cout << endl;
    }

    return 0;
}

//Para pegar a diagonal secundaria, deve-se abrir um if, se a soma da linha i com a coluna j for igual o tamanho da matriz -1
//o programa escreve oq esta dentro
