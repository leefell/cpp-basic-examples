#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int num;
    
    cout << "Digite um numero inteiro e o algoritmo classificara como PAR ou IMPAR!" << endl;
    cin >> num;
    
    if(num % 2 == 0 ){
        cout << "O numero digitado e par!" << endl;
    } else {
        cout << "O numero digitado e impar!" << endl;
    }
    
    
    
    return 0;
}

