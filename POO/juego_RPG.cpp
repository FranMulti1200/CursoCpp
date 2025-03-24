#include<iostream>
using namespace std;


class Personaje
{
    private:
        string nombre;
        int vida;
        int nivel;
        int defensaFisica;
        int defensaMagica;
        int velocidadMovimiento;
        int velocidadATK;
        int rango;
    public:
        void comprar(){};
        void tomarPociones(){};
        Personaje(string,int,int,int,int,int,int,int);
        void toString()
        {
            cout<<"Nombre: "<<nombre<<"\nVida: "<<vida<<"\nNivel: "<<nivel<<"\nDefensa Física: "<<defensaFisica<<
            "\nDefensa Mágica: "<<defensaMagica<<"\nVelocidad de Movimiento: "<<velocidadMovimiento<<
            "\nVelocidad de ataque: "<<velocidadATK<<"\nRango: "<<rango<<"\n";


        }
};
//Crear constructor fuera de la clase
Personaje::Personaje(string _nombre,int _vida, int _nivel, int defFis, int defMag, int velMov, int velAtk, int _rango)
{
    nombre = _nombre;
    vida = _vida;
    nivel = _nivel;
    defensaFisica = defFis;
    defensaMagica = defMag;
    velocidadMovimiento = velMov;
    velocidadATK = velAtk;
    rango = _rango;
}




int main(){

    Personaje personaje("Invencible",100,1,20,5,10,10,1);
    personaje.toString();


return 0;
}
