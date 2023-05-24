#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

/*
  
 */
int main(int argc, char** argv) {

    char palavra[50], palavra2[50];
    cout << "Digite a palavra 1: " << endl;
    cin >> palavra;
    cout << "Digite a palavra 2: " << endl;
    cin >> palavra2;
    
    if (strcmp(palavra, palavra2)==0){ // = recebe / == igual 
        cout << "As palavras sao iguais!"; << endl;
    } 
    else {
        cout << "As palavras sao diferentes"; << endl;
    }
    return 0;
}

