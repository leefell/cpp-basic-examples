#include <fstream>
#include <cstdlib>
#include <iostream>
using namespace std;

float calculaLucro(float venda, float custo, int estoque){
    float lucro = (venda - custo) * estoque;
    return lucro;
}

int main(int argc, char** argv) {

    int nProdutos;

    cout << "Programa para cadastrar Produtos e calcular LUCRO." << endl;
    cout << "\nQuantos Produtos voce vai cadastrar? ";
    cin >> nProdutos;
    cout << endl << endl;
    cin.ignore();

    struct Produtos {
        int codigo;
        float pCusto;
        float pVenda;
        int estoque;
        float lucro;
    }strProdutos[nProdutos];

    for(int i = 0; i < nProdutos; i++){
        cout << "INFORME O CODIGO DO PRODUTO: ";
        cin >> strProdutos[i].codigo;
        fflush(stdin);
        cout << "INFORME O PRECO DE CUSTO DO PRODUTO: ";
        cin >> strProdutos[i].pCusto;
        fflush(stdin);
        cout << "INFORME O PRECO DE VENDA DO PRODUTO: ";
        cin >> strProdutos[i].pVenda;
        fflush(stdin);
        cout << "INFORME A QUANTIDADE DE ESTOQUE DO PRODUTO: ";
        cin >> strProdutos[i].estoque;
        fflush(stdin);
        strProdutos[i].lucro = calculaLucro(strProdutos[i].pVenda, strProdutos[i].pCusto, strProdutos[i].estoque);
        cout << "O produto: " << strProdutos[i].codigo << " pode gerar R$ " << strProdutos[i].lucro << " de lucro." << endl;
        cout << endl;
    }
   
    fstream arquivo("lucro.txt", ios::out);
    
    if(arquivo.is_open()){
        arquivo << "Programa para cadastrar Produtos e calcular LUCRO. " << endl << endl;
        
        arquivo << "Quantos produtos voce vai cadastrar? ";
        arquivo << nProdutos;
        arquivo << endl << endl;
        
        for(int i=0; i<nProdutos; i++){
        arquivo << "INFORME O CODIGO DO PRODUTO: " << endl;
        arquivo << strProdutos[i].codigo << endl;
        arquivo << "INFORME O PRECO DE CUSTO DO PRODUTO: " << endl;
        arquivo << strProdutos[i].pCusto << endl;
        arquivo << "INFORME O PRECO DE VENDA DO PRODUTO: " << endl;
        arquivo << strProdutos[i].pVenda << endl;
        arquivo << "O produto: " << strProdutos[i].codigo << " pode gerar R$ " << strProdutos[i].lucro << " de lucro." << endl << endl;
        }
    }
    arquivo.close();

    return 0;
}