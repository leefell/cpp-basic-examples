#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    int codigo1, codigo2, quantidade1, quantidade2;
    float valor1, valor2, total;
    
    cin >> codigo1 >> quantidade1 >> valor1;
    cin >> codigo2 >> quantidade2 >> valor2;
    
    total = quantidade1 * valor1 + quantidade2 * valor2;
    cout << "VALOR A PAGAR: R$" << total;
    
    
    return 0;
}

