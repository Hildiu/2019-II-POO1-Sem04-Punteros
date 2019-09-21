#ifndef EJERC2_EJERC2_H
#define EJERC2_EJERC2_H

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

typedef int tipo_Entero;

void generaMatrizAleatoria(tipo_Entero **ptrMat, size_t cantidadFilas, size_t cantidadColumnas);

void imprimeMatriz(tipo_Entero **ptrMat, size_t filas, size_t columnas);

tipo_Entero mostrarMenu();

void mostrarPares(tipo_Entero **ptrMat, size_t filas, size_t columnas);

void mostrarImpares(tipo_Entero **ptrMat, size_t filas, size_t columnas);

void liberaMemoriaMatriz (tipo_Entero **ptrMat, size_t filas);

#endif //EJERC2_EJERC2_H
