#include <iostream>
using namespace std;


int main(){

    /** PUNTEROS
        * -> declaración de puntero
        & -> direccion de ...

        partes de la variable
            nombre y tipo
            contenido
            direccion de memoria
    **/

    int var = 100;
    int *puntero = &var;
    cout<<"Contenido de var "<<var<<endl; /** MUESTRO EL CONTENIDO DE LA VARIABLE **/
    cout<<"Direccion de var "<<&var<<endl; /** MUESTRO LA DIRECCION DE LA VARIABLE **/
    cout<<endl;
    cout<<"Contenido del puntero "<<puntero<<endl;
    cout<<"Direccion del puntero "<<&puntero<<endl;

    return 0;
}
