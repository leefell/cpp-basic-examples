#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    float vetorp1[15], vetorp2[15];

    for (int i = 0; i < 15; i++) {
        cout << "Digite a nota da P1 do aluno " << i + 1 << ": ";
        cin >> vetorp1[i];
        cout << "Digite a nota da P2 do aluno " << i + 1 << ": ";
        cin >> vetorp2[i];
        cout << endl;
    }

    cout << "Situação dos Alunos: " << endl;
    for (int i = 0; i < 15; i++) {
        cout << "\nAluno: " << i + 1 << " - P1 = " << vetorp1[i] << " P2 = " << vetorp2[i] << endl;
        float media = (vetorp1[i] + vetorp2[i]) / 2; 
        cout << "Media = " << media << endl;
        if (media < 6) {
            cout << "Reprovado" << endl;
        } else {
            cout << "Aprovado" << endl;
        }
    }

    return 0;
}


