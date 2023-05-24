#include <locale>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    int i = 50;
    
    while (i > 0)
    {
        cout << "contador = " << i << endl;
        i = i - 1;
    }    
    
    return 0;
}

