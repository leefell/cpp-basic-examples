#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int opc, quantidade;
    char nome[30];
    float valorf, valor;
    
    cout << "            Bem-vindo a Lanchonete!" << endl; // 12 espaços
    cout << "Para escolher o lanche e so digitar o codigo correspondente!" << endl;
    cout << "            Abaixo esta o cardapio:" << endl;
    cout << "   | Cachorro Quente - 9,20R$ - Codigo 100 |" << endl;
    cout << "   | Bauru Simples - 12,00R$ - Codigo 101 |" << endl;
    cout << "   | Bauru com Ovo - 13,00R$ - Codigo 102 |" << endl;
    cout << "   | Hambuguer - 10,00R$ - Codigo 103 |" << endl;
    cout << "   | Cheeseburguer - 12,00R$ - Codigo 104 |" << endl;
    cout << "   | Refrigerante Lata - 5,00R$ - Codigo 105 |" << endl;
    cout << "   | Agua - 3,00R$ - Codigo 106 |" << endl;
    cout << "---------------------------------------------------------------" << endl;
    cin >> opc;
    
    switch(opc){ // usar switch 
        case 100:
            valor = 9.20;
            cout << "Voce escolheu Cachorro-Quente!" << endl;
            break;
        case 101:
            valor = 12.00;
            cout << "Voce escolheu Bauru Simples!" << endl;
            break;
        case 102:
            valor = 13.00;
            cout << "Voce escolheu Bauru com Ovo!" << endl;
            break;
        case 103:
            valor = 10.00;
            cout << "Voce escolheu Hambuguer!" << endl;
            break;
        case 104:
            valor = 12.00;
            cout << "Voce escolheu Cheeseburguer!" << endl;
            break;
        case 105:
            valor = 5.00;
            cout << "Voce escolheu Refrigerante Lata!" << endl;
            break;
        case 106:
            valor = 3.00;
            cout << "Voce escolheu Agua!" << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
            return 0;
    }
    
    cout << "Quantas unidades voce gostaria?" << endl;
    cin >> quantidade;
        
    valorf=quantidade * valor;
    cout << "O total foi: " << valorf << " R$" << endl;
            
    
    return 0;
}

