#include "ejerc3.h"
#include <iostream>
#include <iomanip>
using namespace std;

void generaMatrizAleatoria(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    for (tipo_Entero i=0;i<filas;i++) {
        for (tipo_Entero j = 0; j < columnas; j++)
            ptrMat[i][j] = rand()%10;
    }
}

void imprimeMatriz(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    for (tipo_Entero i=0;i<filas;i++) {
        for (tipo_Entero j = 0; j < columnas; j++)
            cout << setw(8) << ptrMat[i][j] << " ";
        cout << "\n";
    }
}

void multiplicaMatrices (tipo_Entero **ptrMat1, tipo_Entero **ptrMat2, tipo_Entero **ptrMat3,  size_t fil1, size_t col1, size_t col2){
    int suma, start;
    for (tipo_Entero i=0;i<fil1;i++) {

            start=0;
            while(start<col2) {
                suma=0;
                for (tipo_Entero j = 0; j < col1; j++) {
                    suma = suma + ptrMat1[i][j] * ptrMat2[j][start];
                }
                ptrMat3[i][start] = suma;
                start++;
            }

        cout << "\n";
    }

}

void solicitaRangosInicioFin(tipo_Entero **pMatriz, tipo_Entero **pMatrizAux, size_t cantidadFilas, size_t cantidadColumnas){
    tipo_Entero rangoInicio, rangoFin, elementosArregloAux;
    tipo_Entero *ptrArreglo;
    tipo_Entero indice, indice2;
    indice2=0;
    indice = 0;
    cout << "Ingrese un rango de inicio para las filas :";
    cin >> rangoInicio;
    cout << "Ingrese un rango de fin para las filas :";
    cin >> rangoFin;
    elementosArregloAux=(rangoFin - rangoInicio)+1;
    for (tipo_Entero i=0;i<cantidadFilas;i++) {
        for (tipo_Entero j = rangoInicio; j < elementosArregloAux; j++){
               pMatrizAux[i][indice] = pMatriz[i][j];
               indice++;
        }
        // Se pide espacio para cada fila en Matriz Auxiliar
        cout << "\n";
    }

   // Impresion temporal
    for (tipo_Entero i=0;i<cantidadFilas;i++) {
        for (tipo_Entero j = 0; j < elementosArregloAux; j++)
            cout << setw(8) << pMatrizAux[i][j] << " ";
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