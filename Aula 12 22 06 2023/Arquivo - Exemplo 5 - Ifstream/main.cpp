#include <iostream>
#include <cstdlib>
#include <string.h>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
    
    string abc;
    //ifstream le um arquivo, portanto o arquivo ja deve existir na pasta do projeto
    ifstream arqleitura("arquivoleitura.txt");
    if(arqleitura.is_open()){
        //! = not / se nao chegou no fim do arquivo
        while(not arqleitura.eof()){ // eof() retorna true ao atingir o fim do arquivo, end of file
            getline(arqleitura, abc);
            cout << abc << endl;
        }
        arqleitura.close();
    }else{
        cout << "ERRO. Aquivo não encontrado!" << endl;
    }
    
    return 0;
}

