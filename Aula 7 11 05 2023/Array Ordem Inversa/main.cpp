#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n[7];
    
    cout << "Digite 7 numeros inteiros: \n";
    for(int i = 0; i < 7; i++){
        cout << "Digite o " << i + 1 << " elemento: ";
        cin >> n[i];
    }
    
    cout << "A ordem inversa dos numeros e: " << endl;
    for(int i = 6; i >= 0; i--){
        cout << n[i] << " ";
    }
   
    cout << endl;
    
    return 0;
}

