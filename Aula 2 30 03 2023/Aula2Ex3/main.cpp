#include <cstdlib>
#include <iostream>             
#include <locale.h>             
using namespace std;

int main(int argc, char** argv) {
    float num1,num2,num3,num4,soma,media; 

    cout << "Digite o seu primeiro numero: ";
    cin >> num1;
    cout << "Digite o seu segundo numero: ";
    cin >> num2;
    cout << "Digite o seu terceiro numero: ";
    cin >> num3;
    cout << "Digite o seu quarto numero: ";
    cin >> num4;
    
    soma = num1 + num2 + num3 + num4;
    media = soma / 4;
   
    cout << "A soma e: "<<soma <<endl;
    cout << "A media e: "<<media;
    
    return 0;
            
}

