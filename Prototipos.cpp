#include <iostream>
using namespace std;

void mensaje();
int suma(int a, int b);
bool esPar(int);

int main(){
    /** Funciones y procedimiento **/
    mensaje();
    int resultado = suma(5,3);
    cout<<resultado<<endl;

    if(esPar(8)){
        cout<<"Es par"<<endl;
    }
    else{
        cout<<"Es impar"<<endl;
    }


    return 0;
}

void mensaje(){

    cout<<"Mensaje dentro de un procedimiento"<<endl;

}
int suma(int a, int b){
    int c = a +b;
    return c;

}
bool esPar(int a){
    if(a%2 == 0){
        return true;
    }
    else{
        return false;
    }

}
