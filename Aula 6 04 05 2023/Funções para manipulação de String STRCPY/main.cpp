// strcpy usada pra copiar uma string em outra -> strcpy(destino, origem)
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char palavra[50], palavra2[50];
    cout << "Digite a palavra 1: " << endl;
    cin >> palavra;
    cout << "Digite a palavra 2: " << endl;
    cin >> palavra2;
    
    cout << "Palavra 1 = " << palavra << endl; 
    cout << "Palavra 2 = " << palavra2 << endl;
    cout << "Agora com a funca no strcpy a palavra 2 = " << strcpy(palavra2, palavra) << endl;
    return 0;
}

