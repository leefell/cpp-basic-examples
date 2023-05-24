#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

/*
 *  Faça um programa em C++ que pergunte um valor em graus Fahrenheit e imprime na
tela o correspondente em Celsius usando a seguinte fórmula:
Celsius = (fahrenheit – 32) * (5.0/9.0). 
 */
int main(int argc, char** argv) {   
    setlocale(LC_ALL, "Portuguese");    
    
    float celsius, fahrenheit;
    
    cout << "Digite um valor em Fahrenheit: " << endl;
    cin >> fahrenheit;
    
    celsius = (fahrenheit - 32) * (5.0/9.0);
    
    cout << "O valor em Celsius é: " << celsius << endl;
    return 0;
}

