#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std;

float CalculoIMC(float peso, float altura) {
    float alturaQuadrado = altura*altura;
    float imc = peso / alturaQuadrado;
    return imc;
}

int main(int argc, char** argv) {

int Npessoas;

    cout << "Programa para calcular o IMC de uma pessoa." << endl;
    cout << "\nQuantos IMCs voce vai calcular? ";
    cin >> Npessoas;
    cin.ignore();

    struct IMC {
        string nome;
        float peso;
        float altura;
        float imc;
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
        strIMC[i].imc = CalculoIMC(strIMC[i].peso, strIMC[i].altura);
        cout << "O IMC e: " << setprecision(2) << strIMC[i].imc << endl;
        cout << endl;
    }
    
    ofstream arquivo("IMC.txt");
    
    if(arquivo.is_open()){
        arquivo << "Programa para calcular IMC de uma pessoa " << endl << endl;
        arquivo << "Quantos IMCs voce vai calcular? " << endl;
        for(int i = 0; i < Npessoas; i++){
            arquivo << "O IMC do cliente " << strIMC[i].nome << " e: " << strIMC[i].imc << endl << endl;
        }
    }else{
        cout << "ERRO, Arquivo nao encontrado!" << endl;
    }
    
    arquivo.close();
    
    return 0;
}

