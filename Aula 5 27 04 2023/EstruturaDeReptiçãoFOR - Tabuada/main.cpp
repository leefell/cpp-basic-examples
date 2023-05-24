#include <iomanip>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * esse setw nada mais é que dar espaço entre as palavras         
 */
int main(int argc, char** argv) {     
    
    int i;
    for(i = 1; i <= 10; i++)
    cout << setw(5) << i << setw(10) << "X 6 = " << i * 6 << endl;
    
    return 0;
}

