#include <iostream>
using namespace std;

int main(){

    /** CADENA DE TEXTO **/
    char cadena1[] = "Me pica un güevo";
    char cadena2[] = {'P','e','c','a','d','o','r','r','r','\0'};
    char cadena3[30];

    /** cout<<cadena1<<endl;
    cout<<cadena2<<endl; **/

    /* cout<<"Ingrese una cadena: ";
    cin>>cadena3; // Al encontrar un espacio en blanco termina de leer.
    cout<<"La cadena es: "<<cadena3<<endl;*/

    cout<<"Ingrese una cadena: ";
    cin.getline(cadena3,30); // con la funcion .getline() se incluyen los espacios en blanco de la cadena.
    cout<<"La cadena es: "<<cadena3<<endl;

    return 0;
}
