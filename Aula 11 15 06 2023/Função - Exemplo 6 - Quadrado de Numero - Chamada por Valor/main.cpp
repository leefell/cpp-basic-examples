#include <iostream>
#include <cstdlib>
//Chamada por Valor
using namespace std;

int quadrado (int x){
    int resultado;
    resultado = x*x;
    return resultado;
}


int main(int argc, char** argv) {

    int x;
    cout << "Digite um numero inteiro: " << endl;
    cin >> x;
    cout << "O quadrado de: " << x << " e " << quadrado(x) << endl;
    return 0;
}

