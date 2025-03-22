#include <iostream>
using namespace std;


int main(){

    /** BUFFER DE ENTRADA **/
    char nombre[25];
    int edad;
    cout<<"Ingresa tu edad:";
    cin>>edad; /* Al introducir los datos y pulsar enter, en el buffer se queda el salto de linea
                    se debe limpiar antes de pedir el siguiente valor*/
    cin.ignore(256,'\n'); // Se limpia el buffer eliminando 256 caracteres o hasta que encuentre '\n'
    cin.ignore(); // Se limpia el buffer eliminando el primer caracter que encuentre.

    cout<<"Ingresa tu nombre:";
    cin.getline(nombre,25);

    cout<<"Te llamas "<<nombre<<" y tu edad es "<<edad<<endl;




    return 0;
}
