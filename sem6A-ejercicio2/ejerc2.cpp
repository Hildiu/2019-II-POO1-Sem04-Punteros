#include "ejerc2.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

void generaMatrizAleatoria(tipo_Entero **ptrMat, size_t cantidadFilas, size_t cantidadColumnas){
    tipo_Entero opcion;

    for (tipo_Entero i=0;i<cantidadFilas;i++) {
        for (tipo_Entero j = 0; j < cantidadColumnas; j++)
            ptrMat[i][j] = 100+rand()%(201-100);
    }
}

void imprimeMatriz(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    for (tipo_Entero i=0;i<filas;i++) {
        for (tipo_Entero j = 0; j < columnas; j++)
            cout << setw(8) << ptrMat[i][j] << " ";
        cout << "\n";
    }
}

tipo_Entero mostrarMenu(){
    int eleccion;
    do {
        cout << "          MENU" << endl;
        cout << "          ----" << endl;
        cout << "     1. Generar matriz aleatoria" << endl;
        cout << "     2. Mostrar solo Pares" << endl;
        cout << "     3. Mostrar solo Impares" << endl;
        cout << "     4. Salir" << endl;
        cout << "      Elija opcion (1-4): ";
        cin >> eleccion;
    }while (eleccion!=1 && eleccion != 2 && eleccion !=3 && eleccion!=4 );
    return eleccion;
}

void mostrarPares(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    for (tipo_Entero i=0;i<filas;i++) {
        for (tipo_Entero j = 0; j < columnas; j++){
            if (ptrMat[i][j] %2==0)
                cout << setw(8) << ptrMat[i][j] << " ";
            else
                cout << setw(8) << 0 << " ";
        }
        cout << "\n";
    }
}

void mostrarImpares(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    for (tipo_Entero i=0;i<filas;i++) {
        for (tipo_Entero j = 0; j < columnas; j++){
            if (ptrMat[i][j] %2!=0)
                cout << setw(8) << ptrMat[i][j] << " ";
            else
                cout << setw(8) << 0 << " ";
        }
        cout << "\n";
    }
}

void liberaMemoriaMatriz (tipo_Entero **ptrMat, size_t filas){
    for(size_t i=0; i<filas; i++)
        delete [] ptrMat[i];
    // El arreglo de punteros apunta a nullptr
    delete [] ptrMat;
    ptrMat = nullptr;
}
