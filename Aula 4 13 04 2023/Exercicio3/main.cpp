#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

// passei mais ou menos 1 hora fazendo esse codigo, essas chaves me quebram 
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    char opc[10];
    float resultado, num1, num2;

    cout << "Este programa vai agir como uma calculadora!" << endl;
    cout << "Digite o simbolo da operacao voce quer realizar: " << endl;
    cout << "Soma: + " << endl << "Subtracao : -" << endl << "Divisao : /" << endl << "Multiplicacao : * " << endl;
    cout << "Digite 'S' se quiser sair do programa." << endl;

    while (true) {
        cin >> opc;

        if (opc[0] == 'S' || opc[0] == 's') {
            cout << "Programa encerrado!" << endl;
            break;
        }

        cout << "Voce escolheu " << opc << "!" << endl;
        cout << "Digite o primeiro numero: " << endl;
        cin >> num1;
        cout << "Digite o segundo numero: " << endl;
        cin >> num2;

        switch (opc[0]) {
            case '+':
                resultado = num1 + num2;
                cout << "O resultado da soma dos seus numeros e: " << resultado << endl;
                break;
            case '-':
                resultado = num1 - num2;
                cout << "O resultado da subtracao dos seus numeros e: " << resultado << endl;
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "O resultado da divisao dos seus numeros e: " << resultado << endl;
                } else {
                    cout << "Nao e possivel dividir por zero!" << endl;
                }
                break;
            case '*':
                resultado = num1 * num2;
                cout << "O resultado da multiplicacao dos seus numeros e: " << resultado << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
                break;
        }
    }

    return 0;
}

