#include <iostream>
#include <iomanip>
#include "ejerc2.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    tipo_Entero cantidadFilas, cantidadColumnas;
    tipo_Entero opcion;

    srand(time(NULL));
    srand(time(nullptr));
    tipo_Entero **pMatriz= nullptr;

    do{
        cout<<"Ingrese cantidad de filas: ";
        cin>>cantidadFilas;
        cout<<"Ingrese cantidad de columnas: ";
        cin>>cantidadColumnas;
    } while(cantidadColumnas <2 || cantidadFilas<2);
    // Se crea un puntero a un arreglo de punteros
    // cada puntero apuntará a un arreglo de enteros.
    pMatriz = new int*[cantidadFilas];
    // Se pide espacio para cada fila
    for(size_t i=0; i<cantidadFilas; i++)
        pMatriz[i] = new tipo_Entero[cantidadColumnas]{};

    do {
        // Se muestra el menú
        opcion = mostrarMenu();
        switch (opcion) {
            case 1:
                generaMatrizAleatoria(pMatriz, cantidadFilas, cantidadColumnas);
                imprimeMatriz(pMatriz, cantidadFilas, cantidadColumnas);
                break;
            case 2:
                mostrarPares(pMatriz, cantidadFilas, cantidadColumnas);
                break;
            case 3:
                mostrarImpares(pMatriz, cantidadFilas, cantidadColumnas);
                break;
            case 4:
                break;
        }
    }while (opcion!=4);

    // Se libera espacio de memoria
    // Se libera espacio de los arreglos de enteros
    liberaMemoriaMatriz(pMatriz, cantidadFilas);
    return 0;
}