#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    int nprodutos;

    cout << "Quantos produtos voce vai lancar? ";
    cin >> nprodutos;
    cin.ignore();

    struct Produtos{
        float preco;
        float soma;
    }strProdutos[nprodutos];

    float total = 0;

    for(int i = 0; i < nprodutos; i++){
        cout << "Digite o preco do produto " << i + 1 << ": " << endl;
        cin >> strProdutos[i].preco;
        total += strProdutos[i].preco; 
    }

    cout << endl;
    cout << "O preco total da compra foi: " << total << endl << endl;

    return 0;
}