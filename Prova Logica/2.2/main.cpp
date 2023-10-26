#include <iostream>
#include <cstdlib>
#include <cmath>
#include <complex>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
     
    float a,b,c, delta;
    double x1, x2;
    
    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    cout << "Digite o valor de C: ";
    cin >> c;
    
    delta = (b*b) - 4 * a * c;
    
    if(a != 0 && delta >= 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        
        cout << "X1: " << x1 << endl;
        cout << "X2: " << x2 << endl;
    }else{
        cout << "Impossivel calcular" << endl;
    }
    
    return 0;
}

