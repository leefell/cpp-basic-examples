#include <iomanip>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * esse setw nada mais é que dar espaço entre as palavras     
 * for tem que ter um incremento ou um decremento    
 * i-- é igual i= i -1
 */

int main(int argc, char** argv) {     
    
    int i;
    for(i = 10; i >= 1; i= i - 1)
    cout << setw(3) << i << setw(10) << "X 6 = " << i * 6 << endl;
    
    return 0;
}

