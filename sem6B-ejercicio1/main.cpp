#include <iostream>
#include <iomanip>
#include "ejerc1.h"
using namespace std;

int main() {
    int cantidadFilas, cantidadColumnas,opcion;
    srand(time(nullptr));
    int **pMatriz= nullptr;
    cantidadFilas=8;
    cantidadColumnas=10;
    pMatriz = new int*[cantidadFilas];
    for(size_t i=0; i<cantidadFilas; i++)
        pMatriz[i] = new int[cantidadColumnas]{};

    generaMatrizAleatoria(pMatriz, cantidadFilas, cantidadColumnas);

    imprimeMatriz(pMatriz, cantidadFilas, cantidadColumnas);

    do {
        opcion = mostrarMenu();
        switch (opcion) {
            case 1:
                reporteNecesidadResane(pMatriz,cantidadFilas, cantidadColumnas);
                break;
            case 2:
                reporteSectorEspecifico(pMatriz,cantidadFilas, cantidadColumnas);
                break;
            case 3:
                 reportePorLetra (pMatriz, cantidadFilas, cantidadColumnas);
                break;
            case 4:
                break;
        }
    }while (opcion!=4);

    liberaMemoriaMatriz(pMatriz, cantidadFilas);
    return 0;
}