#include <iostream>
using namespace std;

int main(){

    /** Indireccion
        * -> indireccion -> dentro de la direccion
    **/

    int var = 10 * 10;
    int *puntero = &var; /** 4 bytes **/
    //*puntero = 50;
    cout<<"El valor de var es "<<*puntero<<endl;

    return 0;
}
