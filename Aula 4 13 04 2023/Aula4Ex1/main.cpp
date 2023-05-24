#include <cstdlib>
#include <locale>
#include <iostream>
using namespace std;

/*
 * setlocale (LC_ALL, "Portuguese");
 * code blocks: file - new - project - console application - c++
 */
int main(int argc, char** argv) {
    setlocale (LC_ALL, "Portuguese");
    float media;
    
    cout << "Digite a média do aluno!" << endl;
    cin >> media;
    
    if(media >= 0 && media <= 10)
    {
        cout << "A média é válida";
        if(media >= 6)
            cout << "Aluno foi aprovado com média " << media << "!" << endl;
    
        else
        {
            cout << "Aluno reprovado com média" << media << endl;
        }
    }

    else
    {
         cout << "A média é invalida!!";
    }
 return 0;

}
