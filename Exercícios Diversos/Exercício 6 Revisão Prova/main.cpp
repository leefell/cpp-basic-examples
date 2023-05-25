#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 6) Faça um programa utilizando C++ para gerar uma tela como a que pode ser visualizada na Figura abaixo. (1.0 ponto) 
Observações: 
        d. O usuário deve digitar um número inteiro, entre 1 e 9, para que seja feita a tabuada.
        e. A formatação da tela de execução é importante.
 * alt + scroll aumenta a letra
 */
int main(int argc, char** argv) {

    float num;
    
    cout << "Informe um numero para que seja apresentada a tabuada: " << endl;
    cin >> num;
    
    cout << "Tabuada do " << num << endl;
    cout << "********************************************" << endl;
    for(int i = 1; i < 11; i++){
        cout << i << " X " << num << " = " << (i*num) << endl;
    }
    cout << "********************************************" << endl;
    
    return 0;
    
}

