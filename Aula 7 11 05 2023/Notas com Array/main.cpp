#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int notas[5], media = 0, i;
    
    for(i = 0; i < 5; i++){
        cout << "Digite a nota do aluno " << (i+i) << ": " << endl;
        cin >> notas[i];
        media += notas[i];
    }
    cout << "\nMedia das notas: " << (media/5) << endl;
    
    return 0;
}

