#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char palavra[20];
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;
    cout << "A palavra tem "  << strlen(palavra) << " letras." << endl;
    
    return 0;
}

