#include <iostream>
#include <cstdlib>

using namespace std;

/*    3. Faça um programa utilizando C++ para gerar uma tela como a que pode ser visualizada na Figura abaixo. (0.5 pontos)
Observações: 
    a) O usuário deve digitar um valor de 1 até 5 para escolher uma das opções (Somar, Subtrair, Dividir, Multiplicar ou Sair). 
 *  Escolhendo uma das opções matemáticas, deverá ser informado dois números. Esses números serão utilizados para realizar a operação matemática selecionada. 
    b) Se o usuário digitar uma opção que não esteja no MENU, o sistema deve mandar uma mensagem de opção inválida.
    c) A formatação da tela de execução é importante;
    d) No envio das respostas, deve ser feito um documento de texto com o código da resposta e uma tela da execução do programa.
 * 
 */
int main(int argc, char** argv) {

    int opc;
    float num1, num2, soma, sub, div, mult;
    
    cout << "Escolha uma das Opcoes: " << endl;
    cout << "1 - para SOMAR" << endl;
    cout << "2 - para SUBTRAIR" << endl;
    cout << "3 - para DIVIDIR" << endl;
    cout << "4 - para MULTIPLICAR" << endl;
    cout << "5 - para SAIR" << endl;
    cout << "\nInforme a operacao: " << endl;
    cin >> opc;
    
    //if(opc == 5){
      //  cout << "Programa encerrado." << endl;
        //return 0;             
    //}
// ctrl + shift segurando e clicando nas linhas voce consegue escrever ao mesmo tempo nelas
    
    switch(opc){
        case 1:
            cout << "\nDigite o primeiro numero: ";
            cin >> num1;
            cout << "\nDigite o segundo numero: ";
            cin >> num2;
            soma = num1 + num2;
            cout << "A soma e: " << soma << endl;
        break;
        case 2:
            cout << "\nDigite o primeiro numero: ";
            cin >> num1;
            cout << "\nDigite o segundo numero: ";
            cin >> num2;
            sub = num1 - num2;
            cout << "A subtracao e: " << sub << endl;
        break;
        case 3:
            cout << "\nDigite o primeiro numero: ";
            cin >> num1;
            cout << "\nDigite o segundo numero: ";
            cin >> num2;
            div = num1 / num2;
            cout << "A divisao e: " << div << endl;
        break;
        case 4:
            cout << "\nDigite o primeiro numero: ";
            cin >> num1;
            cout << "\nDigite o segundo numero: ";
            cin >> num2;
            mult = num1 * num2;
            cout << "A multiplicacao e: " << mult << endl;
        break;
        case 5: // pode se usar um if para encerrar o programa.
            cout << "Programa Encerrado." << endl;
            return 0;
        default:
            cout << "Opcao Invalida." << endl;
        break;
    }
   
    
    return 0;
}

