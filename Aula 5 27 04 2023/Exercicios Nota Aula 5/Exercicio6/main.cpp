#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int valor;
    
    cout << "Digite um numero e o programa vai dizer se e negativo ou positivo!" << endl;
    cin >> valor;
    
    if(valor < 0){
        cout << "O numero e negativo!" << endl;
    }
    else if (valor > 0) {
        cout << "O numero e positivo!" << endl;
    }
    else {
        cout << "O numero digitado foi o Zero!" << endl;
    }
        
    
    
    return 0;
}

