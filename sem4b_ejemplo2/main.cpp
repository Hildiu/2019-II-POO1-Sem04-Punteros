#include <iostream>
#include "FuncionesEjemplo2.h"
using namespace std;

int main() {

    tipo_Entero *pi1 = new tipo_Entero;
    tipo_Entero *pi2 = new tipo_Entero;

    cout << "Ingrese primer entero: ";
    cin>> *pi1;
    cout << "Ingrese segundo entero: ";
    cin>> *pi2;
    cout<<"Primer entero: "<<*pi1<<endl;
    cout<<"Segundo entero: "<<*pi2<<endl;
    cout<<"\nNumeros luego del intercambio: "<<endl;
    cout<<"------------------------------ "<<endl;
    intercambiar(pi1, pi2);
    cout<<"El primer entero ahora tiene el valor: "<<*pi1<<endl;
    cout<<"El segundo entero ahora tiene el valor: "<<*pi2<<endl;
    delete pi1;
    delete pi2;
    return 0;
}