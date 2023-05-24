#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    int golsSaoPaulo, golsPalmeiras;
    cout << "\n*** Placa São Paulo X Palmeiras ***\n";
    cout << "Digite a quantidade de gols do São Paulo: ";
    cin >> golsSaoPaulo;
    cout << "\nDigite a quantidade de gols do Palmeiras: ";
    cin >> golsPalmeiras;
    if(golsSaoPaulo> golsPalmeiras)
        cout << "A festa é tricolor! \n";
    else
    { 
        cout << "A festa é dos porcos!!" << endl;
        cout << "SQN. Não adianta tentar enganar o computador!!" << endl;
    }
    
    
    
    return 0;
} 

