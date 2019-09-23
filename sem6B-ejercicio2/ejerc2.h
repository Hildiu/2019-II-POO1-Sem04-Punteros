#ifndef EJERC2_EJERC2_H
#define EJERC2_EJERC2_H

#include <iostream>
#include <iomanip>
using namespace std;

typedef int tipo_Entero;

void generaMatrizAleatoria(int **ptrMat, size_t filas, size_t columnas);

void imprimeMatriz(int **ptrMat, size_t filas, size_t columnas, string titulo);

void informeNumeroAciertos(tipo_Entero **ptrMat, tipo_Entero **ptrMat1, size_t filas, size_t columnas);

bool encontrado(int *numero, tipo_Entero **ptrMat, size_t filas, size_t columnas);

void liberaMemoriaMatriz (int **ptrMat, size_t filas);

#endif //EJERC2_EJERC2_H
