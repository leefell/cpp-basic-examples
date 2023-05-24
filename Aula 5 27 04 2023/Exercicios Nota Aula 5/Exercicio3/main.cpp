#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/*
 * Escreva um programa em C++ para ler o raio de um círculo, calcular e escrever a sua área e perímetro. Fórmulas:  perímetro =  2  r          
 * onde r é o raio e  vale 3.14, ou pode ser obtido através da biblioteca (cmath), utilizando a constante M_PI.
 * corrigir
 */
int main(int argc, char** argv) {

    float raioc, perimetro, area, pi;
    
    cout << "Qual o raio do circulo?" << endl;
    cin >> raioc;
  
    perimetro = 2 * M_PI * raioc;
    area = M_PI * pow (raioc,2);
    
    cout << "O Raio do circulo e: " << raioc << endl;
    cout << "O Perimetro do circulo e: " << perimetro << endl;
    cout << "A Area do circulo e: " << area << endl;
    
    
    return 0;
}

