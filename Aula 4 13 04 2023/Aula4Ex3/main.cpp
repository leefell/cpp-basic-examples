#include <locale>
#include <cstdlib>
#include <iostream>
#include <cctype>
using namespace std;

/*
 * char é para caracter / int é pra inteiro / float numero com virgula
 * #include <cctype> 
 * toupper(variavel); passa tudo que o usuario digitou pra maisculo
 * case 'A' -> exemplo ; preste atencao nas aspas
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");    
    char bolo;
    
    cout << "Escolha uma opção do cardápio para ver o valor: " << endl;
    cout << "Digite - C -  para escolher bolo de chocolate." << endl;
    cout << "Digite - B -  para escolher bolo de Banana." << endl;
    cin >> bolo;
    bolo = toupper(bolo); // PRESTAR ATENCAO NO TOUPPER
   
    switch(bolo){
        case 'C':
            cout << "O bolo de Chocolate custa R$ 14.00." << endl;
        break;
        case 'B':
            cout << "O bolo de Banana custa R$ 17.00." << endl;
        break;
        default:
        cout << "Opcão Inválida." << endl;      
    }
    

    return 0;
}

