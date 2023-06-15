#include <iostream>
#include <cstdlib>

using namespace std;

void cumprimenta(char inic1, char inic2){
    cout << "Ola, " << inic1 << inic2 << "!" << endl;
}

int main(int argc, char** argv) {

    char primeiro, segundo;
    cout << "Entre com duas iniciais (sem separacao): ";
    cin >> primeiro >> segundo;
    cumprimenta(primeiro, segundo);
    
    return 0;
}

