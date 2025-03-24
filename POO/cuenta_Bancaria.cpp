#include<iostream>
using namespace std;


class CuentaBancaria
{
    private:
        string numeroCuenta;
        int saldoActual;
    public:
        CuentaBancaria(string,int);
        void AgregarDinero(){

            int dinero;
            cout<<"Ingrese saldo a cargar\n";
            cin>>dinero;
            cin.ignore();
            saldoActual= saldoActual+dinero;
        }
        int getSaldoActual(){
            return saldoActual;
        }
        void RetirarDinero();

};

// Constructor y método definidos fuera de la clase
CuentaBancaria::CuentaBancaria(string cuenta, int saldo)
{
    numeroCuenta = cuenta;
    saldoActual = saldo;
}

void CuentaBancaria::RetirarDinero()
{
    int dinero;
    bool validar = false;
    while(validar==false)
    {
        cout<<"Ingrese saldo a retirar\n";
        cin>>dinero;
        cin.ignore();
        if(dinero>saldoActual){
            cout<<"Ingrese cantidad menor a saldo de su cuenta\n";
        }
        else
        {
            saldoActual=saldoActual-dinero;
            validar=true;
        }
    }
}


int main()
{
    CuentaBancaria cuenta("20555789-k",200000);
    cout<<"saldo: "<<cuenta.getSaldoActual()<<"\n";
    /**cuenta.AgregarDinero();
    cout<<"saldo: "<<cuenta.getSaldoActual()<<"\n";**/
    cuenta.RetirarDinero();
    cout<<"saldo: "<<cuenta.getSaldoActual()<<"\n";
    return 0;
}
