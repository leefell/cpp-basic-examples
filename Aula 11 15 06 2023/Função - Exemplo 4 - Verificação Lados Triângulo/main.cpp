#include <iostream>
#include <cstdlib>

// programa que verifica se 3 numeros podem ser lados de um triangulo reto

using namespace std;

int qu(int n){
    return n*n;
}

int main(int argc, char** argv) {

    int s1, s2, s3;
    
    cout << "Digite tres numeros inteiros: " << endl;
    cin >> s1 >> s2 >> s3; 
    
    if( s1 > 0 and s2 > 0 and s3 > 0 and
      (qu(s1) + qu(s2) == qu(s3)) or
      (qu(s2) + qu(s3) == qu(s1)) or
      (qu(s3) + qu(s1) == qu(s2)))
    {
        cout << " " << s1 << " " << s2 << " " << s3
             << " podem formar um triangulo reto\n";   
    }else{
        cout << " " << s1 << " " << s2 << " " << s3
             << " nao podem formar um triangulo reto\n"; 
    }
            
 
    return 0;
}