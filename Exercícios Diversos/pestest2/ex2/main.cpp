#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    int vetor[15],contadorQuatro = 0, maiorMedia = 0;
    float media = 0, soma = 0;
    
    for(int i = 0; i < 15; i++){
        cout << "Digite o " << i + 1 << " valor do vetor: ";
        cin >> vetor[i];
        if(vetor[i] == 4){
            contadorQuatro += 1;
        }
        if(vetor[i] >= 6){
            maiorMedia += 1;
        }
        soma += vetor[i];
        media = soma/15;
    }
    
    cout << "\nA media de todos os valores digitados foi: " << media << endl;
    cout << "No vetor existem: " << contadorQuatro << " numeros iguais a 4 e " << maiorMedia << " numeros maiores que a media." << endl << endl; 
    
    return 0;
}

