#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int N, dentro = 0, fora = 0;
    cout << "Digite a quantidade de inserções: ";
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int X; 
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> X;
        
        if(X >= 10 && X <= 20){
            dentro++;
        }else{
            fora++;
        }
    }
     
    cout << "Valores dentro do intervalo: " << dentro << endl;
    cout << "Valores fora do intervalo: " << fora << endl;
    
    return 0;
}

