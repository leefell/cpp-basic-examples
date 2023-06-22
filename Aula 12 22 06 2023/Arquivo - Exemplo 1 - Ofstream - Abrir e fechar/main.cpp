#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(int argc, char** argv) {
  
    //ios::app -> coloca o texto no final do que ja esta armazenado
    ofstream arq1;
    arq1.open("nomes.txt");
    arq1 << "Alexandre, gosta de academia!" << endl;
    arq1 << "Gabriel, gosta de dirigir com o Marcelin! " << endl;
    arq1 << "Mathias nunca mais deu as cara no IFSP!" << endl;
    arq1 << "Hiago, estava dormindo ontem na van!" << endl;
    arq1 << "Vai ter churrasco na casa do Hiago!" << endl;
    arq1 << "Todos convidados!" << endl;
    arq1.close();
    
    return 0;
}

