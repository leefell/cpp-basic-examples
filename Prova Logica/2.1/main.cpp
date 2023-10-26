#include <iostream>
#include <cstdlib>

using namespace std;

int quantidade(){
    
    int qtd; 
    cout << "Digite a quantidade: ";
    cin >> qtd;
    
    return qtd;
    
}

int main(int argc, char** argv) {

    int opc, qtd;
    float total;
    
    cout << "CODIGO     ESPECIFICACAO     PRECO" << endl;
    cout << "1         Cachorro Quente    R$4.00" << endl;
    cout << "2         X-Salada           R$4.50" << endl;
    cout << "3         X-Bacon            R$5.00" << endl;
    cout << "4         Torrada Simples    R$2.00" << endl;
    cout << "5         Refrigerante       R$1.50" << endl;
    cout << "Digite a opcao: ";
    cin >> opc;
    
    switch(opc){
        case 1:
            qtd = quantidade();
            total = 4 * qtd;
            break;
        case 2:
            qtd = quantidade();
            total = 4.50 * qtd;
            break;
        case 3:
            qtd = quantidade();
            total = 5 * qtd;
            break;
        case 4:
            qtd = quantidade();
            total = 2 * qtd;
            break;
        case 5:
            qtd = quantidade();
            total = 1.5 * qtd;
            break;
        default:
            cout << "Codigo invalido." << endl;
    }
    
    cout << "\nTotal: R$" << total;
    
    return 0;
}

