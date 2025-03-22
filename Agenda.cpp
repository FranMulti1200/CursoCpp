#include <iostream>
#include <fstream>
//#define DIR_ARCHIVO "contactos.dat"
using namespace std;
const char DIR_ARCHIVO[] = "contactos.dat"; //Constante global

struct Contacto{
    char nombre[30];
    char apellido[45];
    int edad;
    char correo[45];
};

void ingresarContacto(Contacto c);
Contacto leerContacto();


int main(){

    /** AGENDA **/
    /** Ingresar Contacto
        Buscar un Contacto
        Ver listado de Contactos
        Eliminar un Contacto
        Actualizar un Contacto
    **/
    Contacto c = leerContacto();
    ingresarContacto(c);
    return 0;
}

void ingresarContacto(Contacto c){
    ofstream salida;
    salida.open(DIR_ARCHIVO, ios::binary | ios::app);
    salida.write((char*)&c,sizeof(Contacto));
    salida.close();

}
Contacto leerContacto(){
    Contacto c;
    cout<<"\t\t\t  Nombre: ";
    cin.getline(c.nombre, 30);
    cout<<"\t\t\tApellido: ";
    cin.getline(c.apellido, 45);
    cout<<"\t\t\t    Edad: ";
    cin>>c.edad;
    cin.ignore();
    cout<<"\t\t\t  Correo: ";
    cin.getline(c.correo, 45);
    return c;
}

