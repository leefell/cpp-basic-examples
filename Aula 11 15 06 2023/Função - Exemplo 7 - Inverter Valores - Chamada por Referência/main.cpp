#include <iostream>
#include <cstdlib>

using namespace std;
// Sem função
int main(int argc, char** argv) {

    int a, b, temp;
    cout << "Entre com dois numeros: ";
    cin >> a >> b;
    cout << "Voce entrou com " << a << " e " << b << endl;
    
    temp = a;
    a = b;
    b = temp;
           
    cout << "Trocados, eles sao " << a << " e " << b << endl;
    
    return 0;
}

