#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 5) Faça um programa que receba uma senha formada de quatro números inteiros, verifique se a senha está correta e, caso não esteja, 
 * solicite novamente a senha (a senha pode ser solicitada apenas 3 vezes). Se a senha entrada for a correta, deverá ser apresentada a mensagem “Senha Correta”, 
 * caso contrário, “Senha Incorreta”. (0.5 pontos)
Observações: 
        a. O usuário deverá informar uma senha.
        b. O sistema deve verificar se a senha é válida.
        c. A senha válida é 1234.
 */
int main(int argc, char** argv) {

    int senha, tentativa = 0;
    do{
        cout << "Digite sua sua senha: " << endl;
        cin >> senha;
        
        if(senha == 1234){
            cout << "Senha correta." << endl;
            return 0;
        }else{
            cout << "Senha incorreta." << endl;
        }
        tentativa += 1;
    }while(tentativa < 3);
        
     if(tentativa == 3){
        cout << "Numero de tentativas esgotadas!" << endl;
    }
  
    return 0;
}

