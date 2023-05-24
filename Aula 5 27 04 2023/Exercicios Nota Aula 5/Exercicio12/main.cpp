#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    int num, soma=0;
    float media;
    
    cout << "Digite 20 numeros e o algoritmo vai calcular a media aritmetica." << endl;
    
    for (int i = 1; i <= 20; i++) {
        cout << "Digite o " << i << " numero: ";
        cin >> num;
    
        if (num > 0){
            soma = soma + num;
        }
        else {
            cout << "O numero informado nao e positivo. Por favor, tente novamente." << endl;
            i--; 
        }
        
    }
    
    media = soma / 20.0;
    cout << "A media aritmetica dos numeros positivos digitados e: " << media << endl;
       
    return 0;
}
