#include <iostream>
#include <cstdlib>

using namespace std;

float capacidade(float, float, float); // protótipo

int main(int argc, char** argv) {

    float comp, larg, alt;
    cout << "Programa para calcular a capacidade de agua de uma piscina." << endl << endl;
    cout << "Digite o comprimento da piscina: " << endl;
    cin >> comp;
    cout << "Digite a largura da piscina: " << endl;
    cin >> larg;
    cout << "Digite a altura da piscina: " << endl;
    cin >> alt;
    cout << "A piscina possui: " << capacidade(comp, larg, alt) << " metros cubicos.";
    return 0;
}

float capacidade (float comprimento, float largura, float altura){
    float resultado;
    resultado = comprimento * largura * altura;
    return resultado;
}