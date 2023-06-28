#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * Escreva um programa em C++  
 * para armazenar 8 números em um vetor e imprimir todos os números. Verifique quantos desses números são múltiplos de 3. 
 * Imprima essa quantidade.
 */
int main(int argc, char** argv) {

    int vetor[8], mult = 0;
    
    for(int i = 0; i < 8; i++){
        cout << "Digite o " << i + 1 << " valor: ";
        cin >> vetor[i];
        if(vetor[i]%3==0){
        mult += 1;
    }    
}
    
    cout << "Os valores digitados foram: ";
    for(int i = 0; i < 8; i++){
        if(i == 7){ // para nao mostrar o - depois do ultimo numero
          cout << vetor[i]; 
          break;
       }
       cout << vetor[i] << " - ";
   }
   cout << endl;
   
   cout << "Foram digitados " << mult << " numeros multiplos de 3." << endl;
   
    return 0;
}

