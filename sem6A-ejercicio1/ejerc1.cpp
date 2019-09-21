#include "ejerc1.h"
#include <iostream>
#include <iomanip>
using namespace std;

void generaMatrizAleatoria(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    for (tipo_Entero i=0;i<filas;i++) {
        for (tipo_Entero j = 0; j < columnas; j++)
            ptrMat[i][j] = rand()%100;
    }
}

void imprimeMatriz(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    for (tipo_Entero i=0;i<filas;i++) {
        for (tipo_Entero j = 0; j < columnas; j++)
            cout << setw(8) << ptrMat[i][j] << " ";
        cout << "\n";
    }
}

void rotaFilasHaciaAbajo(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    // Se guarda última fila en arreglo auxiliar
    tipo_Entero* ptrArreglo = new tipo_Entero[columnas];
    for (tipo_Entero i=0;i<columnas;i++)
        ptrArreglo[i]=ptrMat[columnas-1][i];

    for (tipo_Entero i=filas-1;i>0;i--) {
        for (tipo_Entero j = 0; j < columnas; j++)
            ptrMat[i][j] = ptrMat[i-1][j];
    }
    //El primer puntero de la matriz apunte a este arreglo aux.
    ptrMat[0]=ptrArreglo;
}

void rotaColumnasIzquierdaADerecha(tipo_Entero **ptrMat, size_t filas, size_t columnas) {
    // Se guarda última columna en arreglo auxiliar
    tipo_Entero *ptrArreglo = new tipo_Entero[filas];
    for (tipo_Entero i = 0; i < filas; i++)
        ptrArreglo[i] = ptrMat[i][columnas - 1];

    // rota columnas de izquierda a derecha

    for (tipo_Entero j = columnas - 1; j > 0; j--) {
        for (tipo_Entero i = 0; i < filas; i++)       // filas
            ptrMat[i][j] = ptrMat[i][j - 1];
    }
    // Reemplaza primera columna de la matriz
    for (tipo_Entero i = 0; i < filas; i++)
        ptrMat[i][0] = ptrArreglo[i];
}
void liberaMemoriaMatriz (tipo_Entero **ptrMat, size_t filas){
    for(size_t i=0; i<filas; i++)
        delete [] ptrMat[i];
    // El arreglo de punteros apunta a nullptr
    delete [] ptrMat;
    ptrMat = nullptr;
}