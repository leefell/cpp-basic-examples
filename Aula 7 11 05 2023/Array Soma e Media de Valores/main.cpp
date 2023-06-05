#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float v[10];
    
    cout << "Digite 10 numeros inteiros:\n";
    for(int i = 0; i < 10; i++){
        cout << "Digite o " << i + 1 << " numero: ";
        cin >> v[i];
    }
    
    float soma = 0;
    for(int i = 0; i < 10; i++){
        soma += v[i];
    }
    
    float media = soma/10;
        
    cout << "A soma dos numeros e: " << soma << endl;
    cout << "A media dos numeros e: " << media << endl;
    
    
    return 0;
}

