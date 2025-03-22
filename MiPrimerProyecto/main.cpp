#include <iostream>
#include <cmath>

//#define PI 3.14159

using namespace std;

int main()
{
    /*****Tipo CHAR******/
    /** peso en bytes = 1
        Nº Valores = 256
        Rango = de -128 a 127
        **/

    char letra = 65;
    //cout<<letra<<endl;

    //cout << "Hello world!" << endl;

    /*****Tipo INT******/
    /** peso en bytes = 4 (varia)
        Nº Valores = 2^32 = 4.294.967.296
        Rango = de -2.147.483.648 a 2.147.483.647
        32 bits
        1 -> signo
        31 bits -> valores -> 2^31 = -2.147.483.648

        32 bits -> 4.294.967.296
        unsigned -> sin signo
        unsigned int

        **/

    /*int numero = -1;
    unsigned int numero2 = -1;
    cout << numero << endl;
    cout << numero2 << endl;*/


    /**Bool                 Float                   Double
PESO: 1 byte                4 bytes                8  bytes
RANGO: -               1.17e-38 a 3.40e38        2.22e-308 a 1.80e308
    **/

    /*cout << "  Bool: " << sizeof(bool) << endl;
    cout << " Float: " << sizeof(float) << endl;
    cout << "Double: " << sizeof(double) << endl;*/


    /** ENTRADA POR CONSOLA **/
    /** CIN -> Console INput **/
    /*int numeroIn;
    cout << "Ingrese un número: ";
    cin >> numeroIn;
    cout << "El valor ingresado es "<<numeroIn<<endl;*/

    /**OPERACIONES MATEMATICAS**/
    /** Suma -> +
        Resta -> -
        Multiplicación -> *
        Division -> /
        MODULO -> %
    **/

    /**int numero1 = 7;
    int numero2 = 3;
    float cociente = (float)numero1/numero2;
    int mod = numero1%numero2;
    cout<<cociente<<endl;
    cout<<mod<<endl;
    cout<<5+1<<endl;
    cout<<30*2<<endl;
    cout<<9.0/2<<endl;**/

    /**PRECEDENCIA ARITMETICA**/
    /** 1 - Las operaciones entre parentesis**/
    /** 2 - Multiplicacion, division y modulo**/
    /** 3 - Suma y resta**/
    /** Mismo peso se resuelve de izquierda a derecha**/
    cout<<14-8/2*3+1<<endl;//Salida 3
    cout<<(14-8)/2*3+1<<endl;//Salida 10
    cout<<14-(8/2*3)+1<<endl;//Salida 3
    cout<<14-8/2*(3+1)<<endl;//Salida -2
    cout<<(14-8)/2*(3+1)<<endl;//Salida 12

    bool b1 = false && false;
    cout<<"Resultado boleano: "<<b1<<endl;

    double potencia = pow(5,5);
    double raiz = sqrt(100.0);

    double seno = sin(0.5); // Valor en radianes

    const double PI = 3.14159; // Definición de una constante recomendada.



    return 0;
}
