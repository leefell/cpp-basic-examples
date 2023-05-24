#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int num, cont=0;
    
    cout << "Digite 15 numeros e o algoritmo vai lhe mostrar quais sao negativos." << endl;
    
    for (int i = 1; i <= 15; i = i + 1){
        cout << "Digite o " << i << " numero" << endl;
        cin >> num;
        
        if (num < 0){
            cont = cont + 1;
        }
    }
    
    cout << "Foram digitados " << cont << " numeros negativos!" << endl;
    
    return 0;
}

