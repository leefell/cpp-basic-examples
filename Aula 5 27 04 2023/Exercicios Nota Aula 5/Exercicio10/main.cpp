#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * || = OU
 */
int main(int argc, char** argv) {

    char conceito, matricula[20];
    int nota1, nota2, nota3;
    float media;
    
    cout << "Esse programa vai exibir sua media e se voce foi aprovado!" << endl;
    cout << "Primeiro digite seu usuario (numero de matricula): ";
    cin >> matricula;
    cout << "Ola usuario " << matricula << "!" << endl;
    cout << "Digite a primeira, a segunda e a terceira nota: " << endl;
    cin >> nota1 >> nota2 >> nota3;
    
    media = (nota1 + 2*nota2 + 3*nota3) / 6;

    if(media >= 9.0){
        conceito = 'A';
    } 
    else if (media >= 7.5 && media < 9.0) {
        conceito = 'B';
    }
    else if (media >= 6.0 && media < 7.5) {
        conceito = 'C';
    } 
    else if (media >= 4.0 && media < 6.0) {
        conceito = 'D';
    } 
    else {
        conceito = 'E';
    }
       
    cout << "- Usuario: " << matricula << endl;
    cout << "- Notas: " << nota1 << ", " << nota2 << ", " << nota3 << endl;
    cout << "- Media de aproveitamento: " << media << endl;
    
    if (conceito == 'A' || conceito == 'B' || conceito == 'C'){
        cout << "- Voce foi APROVADO!" << endl;
    } else {
        cout << "- Voce foi REPROVADO! :(" << endl;
    }
    
    
    return 0;
}

