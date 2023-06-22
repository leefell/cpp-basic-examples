#include <fstream>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
    //ctrl shift setinha seleciona
    string linha;
    fstream arq; //fstream -> leitura e escrita
    arq.open("teorema.txt", ios::app);
    if(arq.is_open()){
        arq << "Teorema do macaco Infinito: " << endl;  
        arq << "O teorema propoe que se infinitos macacos " << endl;
        arq << "digitam ao acaso em maquinas de escrever," << endl;
        arq << "produzirao todas as obras da literatura. De forma analoga, " << endl;
        arq << "para um numero suficientemente grande de macacos se movendo de forma aleatoria " << endl;
        arq << "em um cenario do jogo, se ele tiver solucao, " << endl;
        arq << "e improvavel que nenhum macaco a encontre." << endl;
        arq.close();
        
        
       arq.open("teorema.txt",ios::in);//abre no modo de leitura
    while(not arq.eof()){
        getline(arq, linha);
        cout << linha << endl;
    }
    arq.close(); 
    }else{
        cout << "ERRO. Arquivo nao encontrado."<< endl; 
    }
    return 0;
}

