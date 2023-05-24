    #include <iostream>
    #include <cstdlib>

    using namespace std;

    /*
     * 
     */
    int main(int argc, char** argv) {

        int num, soma=0, cont=0;

        for(int i = 1; i <= 20; i = i + 1){
            cout << "Digite o " << i << " numero: ";
            cin >> num;

            if (num % 2 == 0){
                soma = soma + num;
                cont = cont + 1;
            }        
        }

        double media = soma/(double)cont;

        cout << "A media de numeros pares digitados e de: " << media << endl;


        return 0;
    }

