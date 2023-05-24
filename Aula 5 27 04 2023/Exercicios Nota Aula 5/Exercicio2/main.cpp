#include <iostream>
#include <cstdlib>

using namespace std;

/*
 *     2. Escreva um programa em C++ que exiba as quatro mensagens:
        Meu nome é: <seu nome>.
        Sou do curso de Sistemas de Informação.
        Estou no primeiro ano.
        Gosto de programação!!!
 */
int main(int argc, char** argv) {
   
    char nome[40];
    cout << "Qual seu nome?" << endl;
    cin >> nome;
    cout << "Meu nome e: " << nome << endl;
    cout << "Sou do Curso de Sistemas de Informacao." << endl;
    cout << "Estou no primeiro ano." << endl;
    cout << "Gosto de programacao!" << endl;
    
   
    
    return 0;
}

