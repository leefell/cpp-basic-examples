#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

float CalculoIMC(float peso, float altura) {
    float alturaQuadrado = altura*altura;
    float imc = peso / alturaQuadrado;
    return imc;
}

int main(int argc, char** argv) {

    int Npessoas;
    float imc;

    cout << "Programa para calcular o IMC de uma pessoa." << endl;
    cout << "\nQuantos IMCs voce vai calcular? ";
    cin >> Npessoas;
    cin.ignore();

    struct IMC {
        string nome;
        float peso;
        float altura;
    } strIMC[Npessoas];

    for (int i = 0; i < Npessoas; i++) {
        cout << "INFORME O NOME DO CLIENTE: ";
        getline(cin, strIMC[i].nome);
        fflush(stdin);
        cout << "INFORME O PESO DO CLIENTE: ";
        cin >> strIMC[i].peso;
        fflush(stdin);
        cout << "INFORME A ALTURA DO CLIENTE: ";
        cin >> strIMC[i].altura;
        fflush(stdin);
        imc = CalculoIMC(strIMC[i].peso, strIMC[i].altura);
        cout << "O IMC e: " << setprecision(2) << imc << endl;
        cout << endl;
    }
    cout << endl;
    return 0;
}

