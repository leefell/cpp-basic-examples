#include <cstdlib>
#include <locale>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    
    int opc;
    
    cout << "Digite 1 para Prato do Dia!" << endl;
    cout << "Digite 2 para Lasanha!" << endl;
    cout << "Digite 3 para Pioanha Grelhada!" << endl;
    cout << "Digite 4 para Salada Simples!" << endl;
    
    cin >> opc;
    
    switch(opc) // entre parenteses esta a variavel a ser trabalhada
    {
        case 1:
            cout << "Prato do dia: 17.00 reais" << endl;
        break;
        case 2:
            cout << "Lasanha: 17.00 reais" << endl;
        break;
        case 3:
            cout << "Picanha grelhada: 21.00 reais" << endl;
        break;
        case 4:
            cout << "Salada Simples: 7.90 reais" << endl;
        break;
        default:
        cout << "Opção Inválida!!" << endl;
               
    }
    
    return 0;
}

