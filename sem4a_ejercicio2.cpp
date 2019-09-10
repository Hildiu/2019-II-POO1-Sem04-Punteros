#include <iostream>
using namespace std;

int factorial (int &numero){
    int f;
    f=1;
    for(int i=2;i<=numero; i++)
        f*=i;
    return f;
}

int factorial (int* numero){
    int f;
    f=1;
    for(int i=2;i<=*numero; i++)
        f*=i;
    return f;
}


int main() {
    int entero1, entero2, entero3, entero4, entero5;
    int* Ptr1;
    int* Ptr2;
    int* Ptr3;
    int* Ptr4;
    int* Ptr5;
    int** temporalPtr;

    cout<<"Ingrese entero 1: ";
    cin>>entero1;
    cout<<"Ingrese entero 2: ";
    cin>>entero2;
    cout<<"Ingrese entero 3: ";
    cin>>entero3;
    cout<<"Ingrese entero 4: ";
    cin>>entero4;
    cout<<"Ingrese entero 5: ";
    cin>>entero5;
    // punteros apuntan a enteros
    Ptr1= &entero1;
    Ptr2= &entero2;
    Ptr3= &entero3;
    Ptr4= &entero4;
    Ptr5= &entero5;
    // LLamada a la función - Primer entero: Pase por valor
    cout<<"Primer factorial: "<<factorial (entero1)<<endl;
    // LLamada a la función - Segundo entero: Un puntero al segundo puntero.
    temporalPtr=&Ptr2;
    cout<<"Segundo factorial: "<<factorial (*temporalPtr)<<endl;
    // Un pase mediante desreferenciación del tercer entero mediante su puntero.
    cout<<"Tercer factorial: "<<factorial (*Ptr3)<<endl;
    //Una referencia al cuarto puntero
    int &refEntero4 = entero4; //referencia al cuarto puntero
    cout<<"Cuarto factorial: "<<factorial (refEntero4)<<endl;
    //Haga que el quinto puntero apunte al mismo entero que el cuarto puntero
    // y envíelo a la función como parámetro.
    Ptr5=Ptr4;
    cout<<"Quinto factorial: "<<factorial (*Ptr5)<<endl;
    return 0;
}