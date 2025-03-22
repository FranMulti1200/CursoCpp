#include <iostream>
using namespace std;

int potencia(int valor,int exponente);


int main(){
    /** Escriba una función que calcule la
    potencia de un número **/
    cout<< potencia(2,3)<<endl;

    return 0;
}

int potencia(int valor,int exponente){

    int acumulador = 1;
    for(int i=0;i<exponente; i++){
        acumulador= acumulador*valor;
    }
    return acumulador;


}
