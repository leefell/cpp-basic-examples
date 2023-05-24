#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

/*
 * Escreva um programa para determinar o maior de três números dados 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3;
    cout << "Este algoritmo vai determinar o maior entre três números! " << endl;
    cout << "Digite o primeiro número: " << endl;
    cin >> num1;
    cout << "Digite o segundo número: " << endl;
    cin >> num2;
    cout << "Digite o terceiro número: " << endl;
    cin >> num3;
    if (num1 > num2 && num1 > num3){
        cout << "O " << num1 << "é o maior número entre os três!" << endl;
    }
    else
        if (num2 > num1 && num2 > num3) {
            cout << "O " << num2 << "é o maior número entre os três!" << endl;
    }
        else {
            cout << "O " << num3 << " é o maior número!" << endl;
    }
      
    
    return 0;
}

