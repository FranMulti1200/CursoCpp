#include <iostream>
using namespace std;

int main(){

    /** 1. -Escriba un programa que nos permita hallar el area de un triangulo**/
    float base, altura, area;
    cout<<"Ingrese la base del triangulo:";
    cin>>base;

    cout<<"Ingrese la altura del triangulo:";
    cin>>altura;

    area = (base*altura)/2;


    cout<<"El area es "<<area<<endl;

    return 0;

}
