#include <iostream>

using namespace std;

int main()
{
 int matriz3[6][3][3]={
 {
 {3,2,6},
 {6,5,3},
 {6,5,4},
 },
 {
 {6,6,6},
 {4,5,3},
 {6,7,5},
 },
 {
 {1,1,1},
 {2,2,2},
 {3,4,3},
 },
  {
 {1,1,1},
 {2,2,2},
 {3,4,3},
 },
  {
 {1,1,1},
 {2,2,2},
 {3,4,3},
 },
  {
 {1,1,1},
 {2,2,2},
 {3,4,3},
 }
 };

 //imprimindo a matriz de 3 dimensoes
 for(int k = 0; k<6;k++){
    cout << "[" << k << "]"<< endl;
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++)
            cout << " " << matriz3[k][i][j];
    cout<<endl;
    }
 }
 cout<<endl;
 system("pause");
 return 0;
}