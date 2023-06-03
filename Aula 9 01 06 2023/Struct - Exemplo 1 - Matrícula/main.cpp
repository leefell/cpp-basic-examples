#include <iostream>
#include <cstdlib>
#include <cstring>
#define NALUNO 2
using namespace std;

/*
 * matriz armazena um tipo de dado, ja o struct consegue armazenar mais de um tipo de dado 
 * fflush(stdin); -> limpa o lixo de memoria na execucao
 */
int main(int argc, char** argv) {

    struct EstruturaAluno{
        char nome[60];
        char matricula[10];
        int anoIngresso;
    }strAluno[NALUNO];
    
    for(int i = 0; i < NALUNO; i++){
        cout << "Informe o nome do aluno: ";
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe o matricula do aluno: ";
        cin.getline(strAluno[i].matricula, 10);
        cout << "Informe o ano de ingresso do aluno: ";
        cin >> strAluno[i].anoIngresso;
        cout << endl;
        fflush(stdin);
    }
    cout << "\nAlunos Cadastrados com sucesso!\n\n";
    for(int i=0;i<NALUNO;i++){
        cout << "Aluno: " << strAluno[i].nome << endl;
        cout << "Matricula: " << strAluno[i].matricula << endl;
        cout << "Ano de Ingresso: " << strAluno[i].anoIngresso << endl << endl;
    }
       
    return 0;
}

