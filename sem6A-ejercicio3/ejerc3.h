
#ifndef EJERC3_EJERC3_H
#define EJERC3_EJERC3_H

#include <iostream>
#include <iomanip>
using namespace std;

typedef int tipo_Entero;

void generaMatrizAleatoria(tipo_Entero **ptrMat, size_t filas, size_t columnas);

void imprimeMatriz(tipo_Entero **ptrMat, size_t filas, size_t columnas);

void solicitaRangosInicioFin(tipo_Entero **pMatriz, tipo_Entero **pMatrizAux, size_t cantidadFilas, size_t cantidadColumnas);

void multiplicaMatrices (tipo_Entero **ptrMat1, tipo_Entero **ptrMat2, tipo_Entero **ptrMat3,  size_t fil1, size_t col1, size_t col2);

void liberaMemoriaMatriz (tipo_Entero **ptrMat, size_t filas);



#endif //EJERC3_EJERC3_H
