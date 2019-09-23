#include <iostream>
#include <iomanip>
#include "ejerc2.h"
using namespace std;

int main() {
    int cantidadFilas, cantidadColumnas,opcion;
    srand(time(nullptr));
    int **pMatriz= nullptr;
    int **pMatriz1= nullptr;
    cantidadFilas=5;
    cantidadColumnas=5;

    pMatriz = new int*[cantidadFilas];
    for(size_t i=0; i<cantidadFilas; i++)
        pMatriz[i] = new int[cantidadColumnas]{};

    pMatriz1 = new int*[cantidadFilas];
    for(size_t i=0; i<cantidadFilas; i++)
        pMatriz1[i] = new int[cantidadColumnas]{};

    generaMatrizAleatoria(pMatriz, cantidadFilas, cantidadColumnas);
    generaMatrizAleatoria(pMatriz1, cantidadFilas, cantidadColumnas);

    imprimeMatriz(pMatriz, cantidadFilas, cantidadColumnas, "CARTILLA OFICIAL:");
    imprimeMatriz(pMatriz1, cantidadFilas, cantidadColumnas, "CARTILLA JUGADOR:");

    informeNumeroAciertos(pMatriz, pMatriz1, cantidadFilas, cantidadColumnas);



    liberaMemoriaMatriz(pMatriz, cantidadFilas);
    return 0;
}