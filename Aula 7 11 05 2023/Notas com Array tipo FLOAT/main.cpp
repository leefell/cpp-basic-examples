#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //int tamanho = 0; //comentar a linha de baixo e descomentar essa
    const int tamanho = 5;
    float notas[tamanho], media = 0.0;
    int i;
    cout << setprecision(2);
    
    //cout << "Digite quantas notas serao inseridas: ";
    //cin >> tamanho;
    
    for(i = 0; i < tamanho; i++){
        cout << "Digite a nota do aluno " << (i+1) << ": " << endl;
        cin >> notas[i];
        media += notas[i];
    }
    
    cout << "\nMedia das notas: " << (media/tamanho) << endl;
    return 0;
}

