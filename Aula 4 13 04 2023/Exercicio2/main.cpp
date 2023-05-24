#include <locale>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    float salario, irpf;
    char nome[10];
    
    cout << "Este programa vai calcular o valor que voce deve pagar de imposto de renda." << endl;
    cout << "Qual seu nome?" << endl;
    cin >> nome;
    cout << "Qual seu salario?" << endl;
    cin >> salario;
    
    if(salario < 2000) {
        cout << "Ola " << nome << ", voce tem isencao de pagamento do IRPF" << endl;
    }
    else if(salario >= 2000 && salario < 3000) {
        irpf = salario * 0.15;
        cout << "Ola " << nome << ", voce devera pagar " << irpf << "R$ de irpf" << endl;
    }
    else if(salario >= 3000 && salario < 5000) {
        irpf = salario * 0.20;
        cout << "Ola " << nome << ", voce devera pagar " << irpf << "R$ de irpf" << endl;
    }
    else if(salario >= 5000 && salario < 10000) {
        irpf = salario * 0.23;
        cout << "Ola " << nome << ", voce devera pagar " << irpf << "R$ de irpf" << endl;
    }
    else {
        irpf = salario * 0.27;
        cout << "Olá " << nome << ", voce deverá pagar " << irpf << "R$ de irpf" << endl;
    } 
    
    return 0;
}