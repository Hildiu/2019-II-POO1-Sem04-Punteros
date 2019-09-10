#include <iostream>
using namespace std;

int calculadora(char operacion, int* oper1, int* oper2 ){
    int opcion;
    int resultado;
    if (operacion =='+')
        opcion = 1;
    if (operacion =='-')
        opcion = 2;
    if (operacion =='*')
        opcion = 3;
    if (operacion =='/')
        opcion = 4;
    switch (opcion){
        case 1:
            resultado = *oper1 + *oper2;
            break;
        case 2:
            resultado = *oper1 - *oper2;
            break;
        case 3:
            resultado = *oper1 * *oper2;
            break;
        case 4:
            resultado = *oper1 / *oper2;
            break;
    }
    return resultado;
}


int main() {
    char operador;
    int operando1;
    int operando2;
    cout << "Ingrese operador: " <<endl;
    cin>>operador;
    cout << "Ingrese operando 1: " <<endl;
    cin>>operando1;
    cout << "Ingrese operando 2: " <<endl;
    cin>>operando2;
    cout<<"Llamada a funcion 1: "<<calculadora(operador, &operando1, &operando2);
    cout << "" <<endl;
    return 0;
}