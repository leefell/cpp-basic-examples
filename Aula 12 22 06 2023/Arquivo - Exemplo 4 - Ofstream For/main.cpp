#include <fstream>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    ofstream arq4; // objeto de classe ofstream
    arq4.open("arquivo4For.txt");
    for(int i = 0; i<= 10; i++){
        arq4 << "Voce está salvando dados de: " << i << endl;
        cout << "Voce esta salavando dados de: " << i << endl;
    }
    //quando voce coloca o for pra uma linha só, nao precisa usar chaves, mas quando é mais de uma, precisa {}
    arq4.close();
    return 0;
}

