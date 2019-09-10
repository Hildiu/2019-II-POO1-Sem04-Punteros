#include <iostream>
using namespace std;

int main() {
    // Declaración e inicialización de variables
    char caracter1='Z';
    char caracter2='Z';
    int  entero1=100;
    //Declaración de punteros
    // a) Un puntero a un caracter
    char* charPtr;

    // b) Un puntero a un puntero a caracter
    char** charToCharPtr1;
    char** charToCharPtr2;

    //c) Un puntero a un puntero a entero
    int* intPtr;
    intPtr =&entero1;
    int** intToIntPtr;
    intToIntPtr = &intPtr;

    // Punteros apuntan a variables
    charPtr=&caracter1;
    charToCharPtr1= &charPtr;
    // Inicialización de valores
    *charPtr ='A';
     charToCharPtr2 =charToCharPtr1;
    //**intToIntPtr= 3;
    cout<<*charPtr<<endl;
    cout<<**charToCharPtr2 <<endl;
    cout<<**intToIntPtr <<endl;
    return 0;
}