#include <iostream>
using namespace std;


int main(){

    /** MATRICES
            C0  C1  C2
        F0   1   2   3
        F1   4   5   6
        F2   7   8   9
    **/

    int A[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int filas=3, columnas=3;
    int B[filas][columnas];

    //cout<<A[0][0]<<endl;

    for(int i=0;i<filas;i++){
        for(int j=0; j<columnas; j++){
            cout<<"["<<i<<"] ["<<j<<"] ";
            cin>>B[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<filas;i++){
        for(int j=0; j<columnas; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;

}
