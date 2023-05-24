#include <iomanip>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * a linha embaixo do do{ é a verificacao da capacidade de armazenamento do vetor  
 */
int main(int argc, char** argv) {

    const int tamanho = 5;
    float notas[tamanho], media = 0.0;
    int i=0, j;
    cout << setprecision(2);
    
    do{
        if(i >= tamanho){ //a verificacao da capacidade de armazenamento do vetor  
           cout << "Buffer Lotado!" << endl; 
           i++;
           break;
        }
        cout << "Digite a nota do aluno " << (i+1) << ": " << endl;
        cin >> notas[i];  
    }while (notas[i++] >= 0);
    
    i--;
    for(j = 0; j < i; j++){
        
        media += notas[j];
        
    }
    cout << "\nMedia das notas: " << (media/tamanho) << endl;
    
    return 0;
}

