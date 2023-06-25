#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

float CalculoIMC(float peso, float altura){  //funcao
    float alturaQuadrado = altura*altura;
    float imc = peso / alturaQuadrado;
    return imc;
}

int main(int argc, char** argv) {
    
    float imc, peso, altura;
    
    cout << "Programa para calcular o IMC de uma pessoa" << endl;
    cout << "\nDigite o peso: " << endl;
    cin >> peso;
    cout << "Digite a altura: " << endl;
    cin >> altura;
    imc = CalculoIMC(peso, altura); 
    cout << "O IMC e: " << setprecision(2) << imc << endl;
   
    
    return 0;
}

