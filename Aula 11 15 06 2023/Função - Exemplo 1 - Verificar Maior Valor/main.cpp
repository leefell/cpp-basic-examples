#include <iostream>
#include <cstdlib>

using namespace std;

/*
tipo-do-resultado nome-da função (lista-de-argumentos) -> int acheMaior(int x, int y, int z)
{
declarações e sentenças
} 
 */
// funcao que retorna o maior valor entre x, y e z 
int acheMaior (int a, int b, int c)
{
  int maior;
  maior = a;
  
  if(b > maior){
      maior = b;
  }
  
  if(c > maior){
      maior = c;
  } 
  return maior;
  
}  

int main(int argc, char** argv) {
   
    int primeiro, segundo, terceiro, x, y, z, maior_1, maior_2;
    cout << "Digite o primeiro conjunto de tres valores: " << endl;
    cin >> primeiro >> segundo >> terceiro;
    maior_1 = acheMaior(primeiro, segundo, terceiro);
    // maior_1 vai guardar o maior valor entre o primeiro conjunto de numeros
    
    cout << "Digite o segundo conjunto de tres valores: " << endl;
    cin >> x >> y >> z;
    maior_2 = acheMaior(x, y, z);
    // maior_2 vai guardar o maior valor entre o segundo conjunto de números
    
    cout << endl << maior_1 << " + " << maior_2
         << " = " << maior_1 + maior_2 << endl;   
    
    
    return 0;
    
}