#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

/*
 * o  ptr-texto+1 é pro computador mostrar como o ser humano ve, ja que o computador comeca contar de 0,1,2 e o humano 1,2,3
 * esse ptr vai ser explicado no proximo semestre
 * exemplo pratico é o ctrl+F para procurar alguma coisa
 */
int main(int argc, char** argv) {

    char texto[] = "Este exemplo busca por um determinado caracter dentro de uma string.";
    char *ptr;
    cout << "Procurando por 's' no texto: \n\n" << texto << endl << endl;
    ptr=strrchr(texto,'s'); // caso seja alterado a letra, o programa vai procurar pela letra escolhida dentro da frase
    // esse programa altera o strchr POR STRRCHR e isso que muda a funcao de informar a ultima vez na posicao
    
    if (*ptr){
        cout << "A letra s apareceu pela ultima vez na posicao: " << ptr-texto+1 << endl;
    }
    else {
        cout << "Letra não encontrada no texto.";
    }
    
    return 0;
}

