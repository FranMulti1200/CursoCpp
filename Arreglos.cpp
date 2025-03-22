#include <iostream>
using namespace std;


int main(){
    /** Arreglos unidimensionales **/
    int arreglo1[10]; // Declaración
    int arreglo2[] = {1,2,3,4,5}; // Asignación

    for(int i =0; i<10; i++){
        cout<<"Indice "<<i<<":";
        cin>>arreglo1[i];
    }

    for(int i =0; i<10; i++){

        cout<<arreglo1[i]<<" ";
    }





}
