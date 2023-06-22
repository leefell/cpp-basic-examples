#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {

    ofstream arq2("Frases.txt");
    // função is_open - verifica se o arquivo esta aberto
    if(arq2.is_open()){
        arq2 << "Estou estudando programação." << endl;
        arq2 << "IDE: Netbeans" << endl;
        arq2 << "Meu nome é Alexandre" << endl;
        arq2.close();
    }
    
    return 0;
}

