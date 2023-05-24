#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    int contador = 0;
    
    while ( contador < 1000)
    {
        cout << "contador = " << contador << endl;
        contador = contador + 1;
    }    
    cout << "Acabou!" << endl;
    return 0;
}

