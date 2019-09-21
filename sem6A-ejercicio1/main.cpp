//Elabore un programa que permita al usuario ingresar las dimensiones de la matriz (valide que filas y columnas sean iguales).
// El programa realizará lo siguiente:

//Generar de forma aleatoria valores enteros de 0 a 100 para cada elemento.
//Imprimir la matriz.
//Rotar las columnas de izquierda a derecha.
//Imprimir nuevamente la matriz.

#include <iostream>
#include <iomanip>
#include "ejerc1.h"
using namespace std;

int main() {
    int cantidadFilas, cantidadColumnas;
    srand(time(nullptr));
    int **pMatriz= nullptr;
    do{
        cout<<"Ingrese cantidad de filas: ";
        cin>>cantidadFilas;
        cout<<"Ingrese cantidad de columnas: ";
        cin>>cantidadColumnas;
    } while(cantidadColumnas !=cantidadFilas);
    // Se crea un puntero a un arreglo de punteros
    // cada puntero apuntará a un arreglo de enteros.
    pMatriz = new int*[cantidadFilas];
    // Se pide espacio para cada fila
    for(size_t i=0; i<cantidadFilas; i++)
        pMatriz[i] = new int[cantidadColumnas]{};

    // genera nueva matriz
    generaMatrizAleatoria(pMatriz, cantidadFilas, cantidadColumnas);

    // Imprime elementos matriz
    imprimeMatriz(pMatriz, cantidadFilas, cantidadColumnas);

    // Se rota cada fila de la matriz de arriba hacia abajo
    rotaFilasHaciaAbajo(pMatriz, cantidadFilas, cantidadColumnas);

    // Imprime elementos nueva  matriz
    cout<<"\n Luego de rotar de arriba hacia abajo, la matriz queda asi:\n";
    imprimeMatriz(pMatriz, cantidadFilas, cantidadColumnas);

    // Se rota cada columna de la matriz de izquierda a derecha
    rotaColumnasIzquierdaADerecha(pMatriz, cantidadFilas, cantidadColumnas);

    // Imprime elementos nueva  matriz
    cout<<"\n Luego de rotar de izquierda a derecha, la matriz queda asi:\n";
    imprimeMatriz(pMatriz, cantidadFilas, cantidadColumnas);

    // Se libera espacio de memoria
    // Se libera espacio de los arreglos de enteros
    liberaMemoriaMatriz(pMatriz, cantidadFilas);
    return 0;
}