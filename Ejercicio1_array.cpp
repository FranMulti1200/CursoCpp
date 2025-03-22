#include <iostream>
#define MAX 5
using namespace std;



int main(){

    int arreglo1[3];
    int arreglo2[3];
    int arreglo3[3];

    cout<<"ARREGLO 1:"<<endl;
    for(int i=0; i<3; i++){
        cout<<"Indice "<<i<<":";
        cin>>arreglo1[i];
    }

    cout<<"ARREGLO 2:"<<endl;
    for(int i=0; i<3; i++){
        cout<<"Indice "<<i<<":";
        cin>>arreglo1[i];
    }

    cout<<"ARREGLO RESULTANTE:"<<endl;
    for(int i=0; i<3; i++){
        arreglo3[i] = 0;
    }

    for(int i=0; i<3; i++){
        arreglo3[i] = arreglo1[i]*arreglo2[i];
    }

    for(int i=0; i<3; i++){
        cout<<arreglo3[i]<<" " ;
    }

    return 0;

}
