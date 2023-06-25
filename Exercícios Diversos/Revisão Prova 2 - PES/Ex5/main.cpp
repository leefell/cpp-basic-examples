#include <iostream>
#include <cstdlib>

using namespace std; //adicionar o vetor

int main(int argc, char** argv) {

    int numero = 10;
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        vetor[i] = numero;
        numero--;
    }

    cout << "Os valores do vetor sao: " << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            cout << vetor[i] << endl;
            break;
        }
        cout << vetor[i] << " - ";
    }

    cout << endl;
    cout << "Os valores do vetor na ordem inversa sao: " << endl;
    for (int i = 9; i >= 0; i--){
        if(i == 0){
            cout << vetor[i] << endl;
            break;
        }
        cout << vetor[i] << " - ";
    }
    
    cout << endl << endl;
    
    return 0;
}

