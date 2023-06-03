#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/*
 * o contador sempre parte de 0, entao o primeiro numero esta na posicao 0 e nao na 1
 * setw(3) pula o espaço ex: cout << setw(3) << b[0][0] << endl;
 * 
 */
int main(int argc, char** argv) {

  int matriz[2][3];
  int i, j;
    
 //Preenchimento de matriz
  
  for(i=0; i<2; i++){ // linha
      for(j=0; j<3; j++){ // coluna
          cout << "Digite o valor p/ a matriz [" << i << ", " << j << "]:" << endl;
          cin >> matriz[i][j];
      }
  }

// mostrando os valores na tela
  for(i=0; i<2; i++){ // linha
      cout << endl;
      for(j=0; j<3; j++){ // coluna
          cout << matriz[i][j] << "\t";
      }
      cout << endl;
  }   
    return 0;
}