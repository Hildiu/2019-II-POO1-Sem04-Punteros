#include <iostream>
#include "FuncionesEjerc1.h"
using namespace std;

int main() {

    tipo_Entero primerEntero, segundoEntero;
    cout << "Ingrese primer entero: ";
    cin>> primerEntero;
    cout << "Ingrese segundo entero: ";
    cin>> segundoEntero;
    cout<<"Primer entero: "<<primerEntero<<endl;
    cout<<"Segundo entero: "<<segundoEntero<<endl;
    cout<<"\nNumeros luego del intercambio: "<<endl;
    cout<<"------------------------------ "<<endl;
    intercambiar(&primerEntero,&segundoEntero);
    cout<<"El primer entero ahora tiene el valor: "<<primerEntero<<endl;
    cout<<"El segundo entero ahora tiene el valor: "<<segundoEntero<<endl;
    return 0;
}