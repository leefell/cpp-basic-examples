#include <cstdlib>
#include <locale>
#include <iostream>
using namespace std;

/*
 * Escreva um programa que recebe dois números e retorna o maior deles
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    float num1, num2;
    cout << "Este algoritmo vai determinar o maior entre dois números! " << endl;
    cout << "Digite o primeiro número: " << endl;
    cin >> num1;
    cout << "Digite o segundo número: " << endl;
    cin >> num2;
   if (num1 > num2)
    cout << "O " << num1 << " é o maior!" << endl;
   else 
    cout << "O " << num2 << " é o maior!" << endl;
     
    return 0;
}

