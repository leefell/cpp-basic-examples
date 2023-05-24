#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    char palavra[50];
    cout << "Exemplo que substitui caracter de uma palavra." << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;
    cout << "Substituindo " << strset(palavra,'*') << endl; // exemplo digitar senha em um site
    
    return 0;
}

