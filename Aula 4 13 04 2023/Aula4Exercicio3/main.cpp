#include <locale>
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * char float int / DIFERENTE DE !=
 * if 
 * if else 
 * if dentro do if
 */ 
int main(int argc, char** argv) {
    
    setlocale (LC_ALL, "Portuguse");
    int num, i = 1;
    
    do {
       cout << "Digite a quantidade de números!" << endl;
       cin >> num;
       if (num != 0)
           i = i + 1; 
    } while (num != 0); 
    
    
    cout << "Foram digitados " << i << " números. " << endl;
   
    
    return 0;
}

