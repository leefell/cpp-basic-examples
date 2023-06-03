#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int linha, coluna;
    
    cout << "Insira o numero de linhas: ";
    cin >> linha;
    cout << "Insira o numero de colunas: ";
    cin >> coluna;
    
    int matriz[linha][coluna];
    
    
    
    // mostrando valores na tela
    for(i=0; i < lin; i++){
        for(j=0; i < col; j++){
            if(i != j){
                cout << matriz[i][j] << "\t";
            }
        } 
        cout << endl;
    }
    return 0;
}

