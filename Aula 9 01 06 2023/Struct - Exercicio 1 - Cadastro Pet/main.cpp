#include <iostream>  
#include <cstdlib>
#include <cstring>
using namespace std;

/*
 *  Fazer uma struct com ao menos 6 variaveis para armazenar dados de X elementos da struct.
 * Devera ser impresso na tela os dados de todos os elementos.
 */
int main(int argc, char** argv) {

    int npets;
    
    cout << "Quantos PETs serao cadastrados? ";
    cin >> npets;
    cin.ignore();
    
    struct Pets{
        string nome;
        string raca;
        string cor;
        string sexo;
        string nomedono;
        string cpfdono;
    }strPets[npets];
    
    for(int i = 0; i < npets; i++){
        cout << "Insira o nome do pet: ";
        cin >> strPets[i].nome;
        fflush(stdin);
        cout << "Insira a raca do pet: ";
        cin >> strPets[i].raca;
        fflush(stdin);
        cout << "Insira a cor do pet: ";
        cin >> strPets[i].cor;
        fflush(stdin);
        cout << "Macho ou Femea: ";
        cin >> strPets[i].sexo;
        fflush(stdin);
        cout << "Insira o nome do Responsavel: ";
        getline(cin, strPets[i].nomedono);
        fflush(stdin);
        cout << "Insira o cpf do Responsavel: ";
        getline(cin, strPets[i].cpfdono);
        fflush(stdin);
        cout << "\n\n" << endl;
        fflush(stdin);
    }
    
    cout << "\nPet(s) cadastrados com sucesso!\n\n";
    for(int i = 0; i < npets; i++){
        cout << "-----------------------------------" << endl;
        cout << "Nome: " << strPets[i].nome << endl;
        cout << "Raca: " << strPets[i].raca << endl;
        cout << "Cor: " << strPets[i].cor << endl;
        cout << "Sexo: " << strPets[i].sexo << endl;
        cout << "Responsavel: " << strPets[i].nomedono << endl;
        cout << "Cpf Do Responsavel: " << strPets[i].cpfdono << endl;
        cout << "-----------------------------------" << endl;
        cout << "\n\n" << endl;
    }

    return 0;
}

