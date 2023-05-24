#include <cstring>
#include <cstdlib>
#include <iostream>

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
    
    cout << "Unindo a palavra 1 com a palavra 2 temos: " << strcat(palavra, palavra2) << endl;
    return 0;
}

