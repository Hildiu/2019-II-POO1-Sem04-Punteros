#include <iostream>
#include <iomanip>
#include "ejerc3.h"
using namespace std;

int main() {
    int filas1, filas2, columnas1, columnas2;
    srand(time(nullptr));
    int **pMatriz1 = nullptr;
    int **pMatriz2 = nullptr;
    int **pMatriz3 = nullptr;

    do {
        cout << "\nDimensiones primera matriz";
        cout << "\n--------------------------";
        cout << "\nIngrese cantidad de filas: ";
        cin >> filas1;
        cout << "\nIngrese cantidad de columnas: ";
        cin >> columnas1;
        cout << "\nDimensiones segunda matriz";
        cout << "\n--------------------------";
        cout << "\nIngrese cantidad de filas: ";
        cin >> filas2;
        cout << "\nIngrese cantidad de columnas: ";
        cin >> columnas2;

    } while (columnas1 != filas2);
    // Se crea punteros a arreglos de punteros

    pMatriz1 = new int *[filas1];
    pMatriz2 = new int *[filas2];
    pMatriz3 = new int *[filas1];
    // cada puntero apuntará a un arreglo de enteros.
    // Se pide espacio para cada fila de Matriz 1
    for (size_t i = 0; i < filas1; i++)
        pMatriz1[i] = new int[columnas1]{};

    // Se pide espacio para cada fila de Matriz 2
    for (size_t i = 0; i < filas2; i++)
        pMatriz2[i] = new int[columnas2]{};

    // Se pide espacio para cada fila de Matriz 3
    for (size_t i = 0; i < filas2; i++)
        pMatriz3[i] = new int[columnas2]{};

    // genera matrices
    generaMatrizAleatoria(pMatriz1, filas1, columnas1);
    generaMatrizAleatoria(pMatriz2, filas2, columnas2);

    // Imprime elementos de las matrices
    cout << "\n               MATRIZ 1";
    cout << "\n--------------------------\n";
    imprimeMatriz(pMatriz1, filas1, columnas1);
    cout << "\n               MATRIZ 2";
    cout << "\n--------------------------\n";
    imprimeMatriz(pMatriz2, filas2, columnas2);

    // Multiplica elementos de las matrices
       multiplicaMatrices(pMatriz1, pMatriz2, pMatriz3, filas1, columnas1, columnas2);

    cout<< "\n               MATRIZ 3";
    cout<<"\n--------------------------\n";
    imprimeMatriz(pMatriz3, filas1, columnas2);


    // Se libera espacio de memoria
    // Se libera espacio de los arreglos de enteros
    liberaMemoriaMatriz(pMatriz1, filas1);
    liberaMemoriaMatriz(pMatriz2, filas2);
    liberaMemoriaMatriz(pMatriz3, filas1);
    return 0;
}