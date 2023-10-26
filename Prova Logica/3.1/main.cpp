#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    int tentativa, senhaCorreta = 2002;
    
    cout << "Digite a senha: ";
    cin >> tentativa;
    
    while (tentativa != senhaCorreta) {
        cout << "Senha Invalida" << endl;
        cout << "Digite novamente: ";
        cin >> tentativa;
    }
    
    cout << "Acesso Permitido" << endl;
    
    return 0;
}
