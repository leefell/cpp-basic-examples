#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float altura, pesoM, pesoF;
    char sexo;
    
    cout << "Esse programa vai Calcular seu IMC!" << endl;
    cout << "Primeiro, Qual sua altura?" << endl;
    cin >> altura;
    cout << "Segundo, Qual seu sexo? M - Masculino / F - Feminino" << endl;
    cin >> sexo;
    
    if(sexo == 'M'){
    cout << "Sua altura e: " << altura << endl; 
    cout << "Seu sexo e Masculino! " << endl;
    }
    
    else if(sexo == 'F'){
        cout << "Sua altura e: " << altura << endl;
        cout << "Seu sexo e Feminino! " << endl;
    }
    
    if (sexo == 'M') 
    {
        pesoM = (72.7 * altura) - 58;
        cout << "O Peso ideal de um homem com seus dados e de: " << pesoM << endl;
    }
    else if (sexo == 'F')
    {
        pesoF = (62.1 * altura) - 44.7;
        cout << "O Peso ideal de uma mulher com seus dados e de: " << pesoF << endl;
    }
    else
    {
        cout << "Sexo invalido. Insira M - Masculino / F - Feminino" << endl;
        return 1;
    }
    
    return 0;
}

