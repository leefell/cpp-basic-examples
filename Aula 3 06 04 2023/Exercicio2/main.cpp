#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

/*
 * Faça um programa em C++ que leia o nome e três notas do aluno. Calcule a média. Após
o cálculo, imprima uma mensagem da forma:
“Aluno Fulano possui média 7.0”.

 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    char nome[15];
    float media,num1, num2, num3;
    
    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << "Digite a nota 1: " << endl;
    cin >> num1;
    cout << "Digite a nota 2: " << endl;
    cin >> num2;
    cout << "Digite a nota 3: " << endl;
    cin >> num3;
    media = (num1 + num2 + num3)/3;
    cout << "Aluno " << nome << " Sua média é: " << media << endl;
            
            
    return 0;
}

