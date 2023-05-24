#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char palavra[50];
    cout << "Este exemplo inverte uma palavra." << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;
    cout << "A palavra " << palavra << " invertida fica: " << strrev(palavra) << endl;
    
    return 0;
}

