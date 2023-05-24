#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

/* Faça um programa em C++ que peça o nome de uma pessoa, a quantidade de
quilômetros que ela andou de bicicleta e o tempo gasto em minutos para percorrer essa
distância. Mostre na tela uma mensagem como:
“Olá Mário, você percorreu 30 km em 65 minutos, sua velocidade média foi: 27.7.
 * 
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    
    char nome[10];
    float km, minutos, velocidade;
    cout << "Qual seu nome?" << endl;
    cin >> nome;
    cout << "Quantos km voce percorreu?" << endl;
    cin >> km;
    cout << "Quantos minutos voce levou?" << endl;
    cin >> minutos;
    velocidade = km / (minutos/60); 
    cout << "Ola " << nome << ". Voce percorreu " << km << " km em " << minutos << " minutos. Sua velocidade media foi: " << velocidade << " km/h." << endl;
    
    return 0;
}

