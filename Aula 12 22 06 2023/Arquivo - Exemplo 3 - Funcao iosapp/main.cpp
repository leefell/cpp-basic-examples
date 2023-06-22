#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {

    ofstream arq3;
    arq3.open("TerceiroArq.txt", ios::app);
    if(arq3.is_open()){
        arq3 << "Esse terceiro exemplo testa o ios::app!" << endl;
        arq3 << "ios::app -> salvar no final do arquivo ou não, coloca o texto no final do que ja esta armazenado, sem sobrescrever" << endl;
        arq3.close();
    }else{
        
        cout << "ERRO: arquivo não foi aberto ou não existe" << endl;
    }
    return 0;
}

