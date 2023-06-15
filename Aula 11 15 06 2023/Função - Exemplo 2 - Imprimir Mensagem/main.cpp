#include <iostream>
#include <cstdlib>

using namespace std;

/*
tipo-do-resultado nome-da função (lista-de-argumentos) -> int acheMaior(int x, int y, int z)
{
declarações e sentenças
} 
 */

//sem retorno e sem argumento

//se a funcao nao retorna nenhum valor ela é do tipo void 
void oi(void){ // o void nos parametros é pq nao vai entrar com nenhum argumento/parametro, sem dados de entrada
    
    cout << "Esse e um exemplo de Definicaoo de Funcao com Cout!" << endl;
    cout << "Existirao outros..." << endl;
    cout << endl << endl;
}

int main(int argc, char** argv) {

    int i;
    i = 1;
    
    while(i <= 5){
        oi();
        i++;
    }
    return 0;
}

//// outro exemplo de void 
//#include <iostream>
//using namespace std;
//
//void alo(void){
//    cout << "Alo" << endl; 
//}
//
//int main(){
//    alo();         
//   return 0;         
//}