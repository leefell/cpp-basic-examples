#include <iostream>

using namespace std;

int main(){
    int vetor[5];
    
    for(int i = 0; i < 5; i++){
        cout << "Digite um valor para a posicao " << i << " do array: ";
        cin >> vetor[i];
    }
    
    cout << endl << endl;
    
    cout << "O seu array ficou: ";
    
    cout << "{";
    for(int i = 0; i < 5; i++){
        cout << " " << vetor[i];
    }
    cout << "}" << endl;
    
    return 0;
}