#include <locale>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    
    int opc;
    
    cout << "Esse programa vai exibir uma frase de acordo com o time que voce escolher!" << endl;
    cout << "Digite 1 para escolher São Paulo!" << endl;
    cout << "DIgite 2 para escolher Santos!" << endl;
    cout << "Digite 3 para escolher Palmeiras!" << endl;
    cout << "Digite 4 para escolher Corintians!" << endl;
    
    cin >> opc;
    
    switch(opc)
    {
        case 1:
            cout << "Só os fortes fazem história! Com você e por você contra todos! Igual a todo Tricolor eu sou guerreiro!" << endl;
        break;
        case 2:
            cout << "Santos é um sentimento que eu levo no meu peito!" << endl;
        break;
        case 3: 
            cout << "Eu torço pro time que tem raça e emoção. Eu torço para o todo poderoso verdão" << endl;
        break;
        case 4:
            cout << "O Corinthians é mais que a Seleção Brasileira, o Corinthians é uma eterna religião, amor e paixão" << endl;
        break;
        default:
            cout << "Opcão Inválida!" << endl;
    }
    
    return 0;
}

