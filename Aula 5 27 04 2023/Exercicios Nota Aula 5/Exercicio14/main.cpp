#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float salario, mediaSalario = 0.0, maiorSalario = 0.0;
    int numFilhos, mediaFilhos = 0;
    
    for (int i = 1; i <= 15; i++) {
        cout << "Digite o salario do " << i << " habitante: ";
        cin >> salario;
        cout << "Digite o numero de filhos do " << i << " habitante: ";
        cin >> numFilhos;
        
        mediaSalario = mediaSalario + salario;
        mediaFilhos = mediaFilhos + numFilhos;
        
        if (salario > maiorSalario){
            maiorSalario = salario;
        }
    }
    
    mediaSalario = mediaSalario / 15;
    mediaFilhos = mediaFilhos / 15;
    
    cout << "Media do salario da populacao: " << mediaSalario << endl;
    cout << "Media do numero de filhos da populacao: " << mediaFilhos << endl;
    cout << "Maior salario da populacao: " << maiorSalario << endl;
    
    
    
    return 0;
}

