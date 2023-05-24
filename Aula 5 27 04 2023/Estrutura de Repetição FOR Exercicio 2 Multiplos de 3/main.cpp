#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int i;
    for(i = 3; i <= 100; i = i + 3) // o i = i + 3 poderia ser feito como i+=3
    cout << setw(5) << i << endl;      
    return 0;
}

