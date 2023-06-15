#include <iostream>
using namespace std;
/* função troca(px, py)
 *  ação:        troca os valores inteiros apontados por px e py
 *  entrada:     apontadores px e py
 *  saida:       valor de px e py trocados na origem da chamada da função
 *  suposições:  px e py sao apontadores validos
 *  algoritmo:   primeiro guarda o primeiro valor em um temporario e
 *               troca
 */
void troca(int &px, int &py){
    int temp;

    temp = px;
    px = py;
    py = temp;
}

int main(){
  int a, b;
  cout << "Entre dois numeros: ";
  cin >> a >> b;
  cout << "Voce entrou com " << a << " e " << b << endl;

  // Troca a com b -- passa argumentos por referencia
  troca(a, b);

  cout << "Trocados, eles sao " << a << " e " << b << endl;
}