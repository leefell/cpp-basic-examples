#include <iostream>
#include <cstdlib>

using namespace std;

/*  2. Faça um programa utilizando C++ para gerar uma tela como a que pode ser visualizada na Figura abaixo.  (0.4 pontos)
Observações: 
    a) O usuário deve digitar o número de medalhas de OURO, PRATA e BRONZE;
    b) No final deve ser somado o número de medalhas de OURO, PRATA e BRONZE para apresentar o total de medalhas que o Brasil ganhou;
    c) A formatação da tela de execução é importante;
    d) No envio das respostas, deve ser feito um documento de texto com o código da resposta e uma tela da execução do programa.
 * 
 */
int main(int argc, char** argv) {

    int m_ouro, m_prata, m_bronze, total;
    
    cout << "Digite o numero de medalhas de OURO que o Brasil ganhou nas Olimpiadas: " << endl;
    cin >> m_ouro;
    
    cout << "\nDigite o numero de medalhas de PRATA que o Brasil ganhou nas Olimpiadas: " << endl;
    cin >> m_prata;
    
    cout << "\nDigite o numero de medalhas de BRONZE que o Brasil ganhou nas Olimpiadas: " << endl;
    cin >> m_bronze;
    
    total = m_ouro + m_prata + m_bronze;
    cout << "\nO Brasil ganhou " << total << " medalhas nas Olimpiadas." << endl;
    return 0;
}

