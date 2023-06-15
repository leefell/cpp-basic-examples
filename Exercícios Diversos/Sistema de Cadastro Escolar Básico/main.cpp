#include <iostream>
#include <cstdlib>
#include <cstring>
#include <limits>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    struct Estudante{
        string nome;
        int idade;
        float mediaN;
        bool aprovado; 
    };
    
    Estudante estud[50];
    int qtndEstud = 0;
    int opc;
    
    do{
        cout << "Menu:\n";
        cout << "1. Cadastro de Estudante\n";
        cout << "2. Exibir todos os Estudantes\n";
        cout << "3. Verificar Estudantes Aprovados\n";
        cout << "4. Sair\n";
        cout << "------------------------------------\n";
        cin >> opc;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        switch(opc){
            case 1:
                if(qtndEstud < 50){
                Estudante novoEstud;
                cout << "Nome: ";
                getline(cin, novoEstud.nome);
                cout << "Idade: ";
                cin >> novoEstud.idade;
                cout << "Media das notas: ";
                cin >> novoEstud.mediaN;
                cout << "Status (1 = Aprovado / 0 = Reprovado): ";
                cin >> novoEstud.aprovado;
                cout << "---------------------------------------" << endl;
                
                estud[qtndEstud] = novoEstud;
                qtndEstud++;
                        
                }else{
                    cout << "Limite de Cadastros Atingido!\n.";
                }
                break;
             
            case 2:
                if(qtndEstud > 0){
                    cout << "Estudantes Cadastrados: \n";
                    for(int i = 0; i < qtndEstud; i++){
                        cout << "Nome: " << estud[i].nome << "\n";
                        cout << "Idade: " << estud[i].idade << "\n";
                        cout << "Media das Notas: " << estud[i].mediaN << "\n";
                        cout << "Status: " << estud[i].aprovado << "\n";
                        cout << "-------------------" << endl;
                    }
                }else{
                    cout << "Nenhum estudante esta cadastrado!\n";
                }
                break;
            case 3:
                if (qtndEstud > 0) {
                    cout << "Estudantes aprovados:\n";
                    for (int i = 0; i < qtndEstud; i++) {
                        if (estud[i].aprovado) {
                            cout << "Nome: " << estud[i].nome << "\n";
                            cout << "Idade: " << estud[i].idade << "\n";
                            cout << "Media das notas: " << estud[i].mediaN << "\n";
                            cout << "-------------------" << endl;
                        }
                    }
                } else {
                    std::cout << "Nenhum estudante cadastrado.\n";
                }
                break;
            case 4:
                cout << "Fechando o Programa.\n";
                break;
                
            default:
                cout << "Opção Ínvalida.\n";
                break;                
        }
    }while (opc != 4);
    
    return 0;
}

