#include <iostream>
#include <cstdlib>

using namespace std;

//Escreva um programa em C++ para armazenar 10 números em um vetor. 
//Imprima os números do vetor. Calcule e imprima a soma desses números. 
int main(int argc, char** argv) {

   int vetor[10];
   float soma = 0;
   
   for(int i = 0; i < 10; i++){
       cout << "Digite o " << i + 1 << " valor: ";
       cin >> vetor[i];
       soma += vetor[i];
   }
   
   cout << "Os valores digitados sao: ";
   
   for(int i = 0; i < 10; i++){
       if(i == 9){ // para nao mostrar o - depois do ultimo numero
          cout << vetor[i]; 
          break;
       }
       cout << vetor[i] << " - ";
   }
   cout << endl;
   cout << "\nA soma do valores digitados e: " << soma << endl << endl;
   
    return 0;
}

