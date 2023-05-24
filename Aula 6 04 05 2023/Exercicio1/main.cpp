// Fazer um programa para solicitar o nome completo de uma pessoa, 3 notas e gerar sua media  
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    string nome; // quando se usa o string nao precisa do char 
    float media, nota1, nota2, nota3;
    
    cout << "Qual seu nome completo?";
    getline(cin, nome);
    
    cout << "Digite 3 notas e o programa vai te dar a media!" << endl;
    cin >> nota1 >> nota2 >> nota3;
    
    media=(nota1 + nota2 + nota3)/3;
    
    cout << "Ola " << nome << endl;
    cout << "Sua media e: " << media << endl;
    
            
            
    
    return 0;
}

