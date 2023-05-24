#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string nome;
    setlocale(LC_ALL, "Portuguese");
    cout << "Ola, vamos conversar?" << endl;
    cout << "Qual e seu nome? ";
    getline(cin, nome); //IMPORTANTE
    cout << "Nossa, " << nome << ", que nome maravilhoso." << endl;
    return 0;
}

// com a funcao getline da pra consertar o erro de nao pegar o nome completo no exercicio anterior

