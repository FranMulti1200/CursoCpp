#include <iostream>
using namespace std;

struct Fecha{
    int dia;
    int mes;
    int anho;
};

struct Persona{
    char nombre[30];
    char apellido[45];
    int edad;
    char sexo;
    Fecha fechaNacimiento;
};

void llenarPersonas(Persona[],int);
void mostrarVarones(Persona[],int,Fecha,Fecha);
Persona leerPersona();
Fecha leerFecha();
bool estaEntreFechas(Persona,Fecha,Fecha);
int numeroDias(Fecha);

int main(){
    /**
        Diseñar un programa que imprima todos los nombres, apellidos
        y edades de todos los varones nacidos entre dos fechas
        ingresadas desde el teclado. Un registro contiene los siguientes
        datos : Apellidos,Nombres,Fecha de nacimiento(Día,Mes,Año),
        edad y Sexo

        20/10/1992    27/10/1992  22/11/1993  24/11/1993

     **/
    Persona personas[30];
    int N = 4;
    Fecha ini,fin;
    llenarPersonas(personas,N);
    cout<<"Fecha inicio :";
    ini = leerFecha();
    cout<<"Fecha de fin :";
    fin = leerFecha();
    cout<<endl;
    mostrarVarones(personas,N,ini,fin);
    return 0;
}

void llenarPersonas(Persona P[],int N){
    for(int i=0;i<N;i++){
        cout<<"PERSONA "<<i+1<<endl;
        P[i] = leerPersona();
        cout<<endl;
    }
}

void mostrarVarones(Persona P[],int N ,Fecha ini,Fecha fin){
    for(int i=0;i<N;i++){
        if((P[i].sexo == 'M') && (estaEntreFechas(P[i],ini,fin))){
            cout<<" Nombre : "<<P[i].nombre<<endl;
            cout<<"Apellido: "<<P[i].apellido<<endl;
            cout<<"    Edad: "<<P[i].edad<<endl;
            cout<<endl;
        }
    }
}

Persona leerPersona(){
    Persona p;
    cout<<" Nombre :";
    cin.getline(p.nombre,30);
    cout<<"Apellido:";
    cin.getline(p.apellido,45);
    cout<<"    Edad:";
    cin>>p.edad;
    cout<<"    Sexo:";
    cin>>p.sexo;
    cout<<"Fecha de nacimiento : ";
    p.fechaNacimiento = leerFecha();
    cin.ignore();
    return p;
}

Fecha leerFecha(){
    Fecha f;
    cin>>f.dia>>f.mes>>f.anho;
    /**
        27/10/1992
        27 10 1992
    **/

    return f;
}

bool estaEntreFechas(Persona p,Fecha ini,Fecha fin){
    /**
        1/1/1 = 1 + 1*30 + 1*365 = 396
        5/1/1 = 5 + 1*30 + 1*365 = 400
        27/1/1= 27 + 1*30+1*365 = 422
    **/
    int diasIni = numeroDias(ini);
    int diasFin = numeroDias(fin);
    int diasNacimiento = numeroDias(p.fechaNacimiento);
    if(diasIni<=diasNacimiento && diasNacimiento<=diasFin){
        return true;
    }
    else{
        return false;
    }
}

int numeroDias(Fecha f){
    return f.dia + f.mes*30+f.anho*365;
}

