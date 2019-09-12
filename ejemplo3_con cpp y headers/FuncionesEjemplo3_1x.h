#ifndef EJEMPLO3_1X_FUNCIONESEJEMPLO3_1X_H
#define EJEMPLO3_1X_FUNCIONESEJEMPLO3_1X_H

#include <iostream>
using namespace std;
typedef float tipo_Real;
typedef int tipo_Entero;

tipo_Real* ingresaNotas(size_t elementos);
void imprimeNotas(tipo_Real* arreglo, size_t elementos);
tipo_Real calculaPromedio(tipo_Real* arreglo, size_t elementos);
void imprimeNotasMayoresPromedio(tipo_Real* arreglo, size_t elementos, tipo_Real promedio);
void imprimeMayorNota(tipo_Real* arreglo, size_t elementos);
tipo_Real calculaMenorNota(tipo_Real* arreglo, size_t elementos);


#endif //EJEMPLO3_1X_FUNCIONESEJEMPLO3_1X_H
