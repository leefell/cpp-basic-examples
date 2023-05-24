#include <locale>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    int i = 1, num;
    
    cout << "Informe um número: " << endl;
    cin >> num;
    cout << "Os 10 antecessores de " << num << " são: " << endl;
    
    
    do {
        cout << num - i << endl;
        i = i + 1;
    } while (i <= 40);
    
    return 0;
}

