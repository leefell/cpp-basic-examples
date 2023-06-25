#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, char** argv) {

    int npets;
    
    cout << "Quantos pets serao cadastrados? ";
    cin >> npets;
    cin.ignore();
    
    struct Pets{
        string nomepet;
        string especiepet;
        string racapet;
        string sexopet;
        int idadepet;
        string nomedono;
        string rgdono;
        string telefonedono;
    }strPets[npets];
    
    for(int i = 0; i < npets; i++){
        cout << "INSIRA O NOME DO PET: ";
        cin >> strPets[i].nomepet;
        fflush(stdin);
        cout << "INFORME A ESPECIE DO PET: ";
        cin >> strPets[i].especiepet;
        fflush(stdin);
        cout << "INFORME A RACA DO PET: ";
        getline(cin, strPets[i].racapet);
        fflush(stdin);
        cout << "INFORME O SEXO DO PET: ";
        cin >> strPets[i].sexopet;
        fflush(stdin);
        cout << "INFORME A IDADE DO PET: ";
        cin >> strPets[i].idadepet;
        fflush(stdin);
        cout << "INFORME O NOME DO DONO DO PET: ";
        getline(cin, strPets[i].nomedono);
        fflush(stdin);
        cout << "INFORME O RG DO DONO DO PET: ";
        getline(cin, strPets[i].rgdono);
        fflush(stdin);
        cout << "INFORME O TELEFONE DO DONO DO PET: ";
        getline(cin, strPets[i].telefonedono);
        fflush(stdin);
        cout << endl; 
    }
    //system("clear||cls");
    cout << "Cliente Cadastrado com Sucesso!" << endl;
    for(int i = 0; i < npets; i++){
        cout << "-----------------------------------" << endl;
        cout << "NOME DO PET: " << strPets[i].nomepet << endl;
        cout << "ESPECIE DO PET: " << strPets[i].especiepet << endl;
        cout << "RACA DO PET: " << strPets[i].racapet << endl;
        cout << "SEXO DO PET: " << strPets[i].sexopet << endl;
        cout << "IDADE DO PET: " << strPets[i].idadepet << endl;
        cout << "NOME DO DONO DO PET: " << strPets[i].nomedono << endl;
        cout << "RG DO DONO DO PET: " << strPets[i].rgdono << endl;
        cout << "TELEFONE DO DONO DO PET: " << strPets[i].telefonedono << endl;
        cout << "-----------------------------------" << endl;
        cout << "\n";
    }
    return 0;
}