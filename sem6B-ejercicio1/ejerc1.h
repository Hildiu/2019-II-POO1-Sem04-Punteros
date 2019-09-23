#ifndef EJERC1_EJERC1_H
#define EJERC1_EJERC1_H


#include <iostream>
#include <iomanip>
using namespace std;

typedef int tipo_Entero;

void generaMatrizAleatoria(int **ptrMat, size_t filas, size_t columnas);

void imprimeMatriz(int **ptrMat, size_t filas, size_t columnas);

tipo_Entero mostrarMenu();

void reporteNecesidadResane (tipo_Entero **ptrMat, size_t filas, size_t columnas);

void reporteSectorEspecifico (tipo_Entero **ptrMat, size_t filas, size_t columnas);

void reportePorLetra (tipo_Entero **ptrMat, size_t filas, size_t columnas);

void liberaMemoriaMatriz (int **ptrMat, size_t filas);

#endif //EJERC1_EJERC1_H
