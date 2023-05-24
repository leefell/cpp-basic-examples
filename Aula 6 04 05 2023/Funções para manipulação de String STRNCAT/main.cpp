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
    
    cout << "Unindo a palavra 1 com a palavra 2 temos: " << strncat(palavra, palavra2, 3) << endl;
    return 0;
}

