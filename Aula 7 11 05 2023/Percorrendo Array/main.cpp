#include <iostream>
#define DIM 5

using namespace std;

int main(){
    int vetor[DIM] = {1, 2, 3, 4, 5};
    int vetor1[] = {10, 20, 30, 40, 50, 60, -1};
    
    cout << "O vetor com tamano definido possui os seguintes valores: " << endl;
    for(int i = 0; i<DIM; i++){
        cout << "Na posicao " << i << " o valor e: " << vetor[i] << endl;
    }
    
    cout << endl;
    
    cout << "O vetor ira terminar em -1" << endl;
    for(int i = 0; vetor1[i]>0; i++){
        cout << "O valor na posicao " << i << " e: " << vetor1[i] << endl;
    }
    
    return 0;
}