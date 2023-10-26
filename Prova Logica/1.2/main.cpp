#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    float area = 0, raio = 0;
    
    
    cout << "Digite o valor do Raio do Circulo: " << endl;
    cin >> raio;
    
    area = 3.14159 * (raio * raio);
    cout << "A area e: " << setprecision(4) << area;
    
    return 0;
}

