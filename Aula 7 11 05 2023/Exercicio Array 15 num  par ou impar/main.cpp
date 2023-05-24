#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int numeros[15], i;
    
    for(i = 0; i < 15; i++){
        cout << "Digite um numero: ";
        cin >> numeros[i];
    }
    
    for(int i = 0; i < 15; i++){
        if(numeros[i] % 2 == 0){
            cout << numeros[i] << " - Par " << endl;
        } else{
            cout << numeros[i] << " - Impar " << endl;
        }
    }
    
    return 0;
}

