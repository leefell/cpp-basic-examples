#include <iostream>
#include <cstdlib>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float valorproduto;
    char nomeproduto[50];
    float desconto, precof;
    
    cout << "Qual o nome do produto?" << endl;
    cin >> nomeproduto;
    cout << "Qual o valor do produto?" << endl;
    cin >> valorproduto;
    
    desconto = valorproduto * 0.13;
    precof = valorproduto - desconto;
    
    cout << "Produto: " << nomeproduto << endl;
    cout << "Valor: " << valorproduto << endl;
    cout << "Desconto: " << desconto << endl;
    cout << "Valor Final: " << precof << endl;
            
    
    return 0;
}