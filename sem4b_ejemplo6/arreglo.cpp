#include <iostream>
#include "arreglo.h"

device dev;

number randint(number first, number last) {
    distribution dist(first, last);
    return dist(dev);
}

Array generar_arreglo_aleatorio(size n, size first, size last) {
    number* arreglo = new number[n];
    for (size i = 0; i < n; ++i)
        arreglo[i] = randint(first, last);
    return Array{arreglo, n};
}

Void liberar_arreglo(Array& arreglo) {
    if (arreglo.first != nullptr)
        delete[] arreglo.first;
    arreglo.first = nullptr;
    arreglo.second = 0;
}

Void mostrar_arreglo(Array& arreglo) {
    for (size i = 0; i < arreglo.second; ++i)
        std::cout << arreglo.first[i] << " ";
    std::cout << std::endl;
}

Array copiar_arreglo(Array& arreglo) {
    auto copia = new number[arreglo.second];
    for (int i = 0; i < arreglo.second; ++i)
        copia[i] = arreglo.first[i];
    return Array {copia, arreglo.second};
}

size contar_repetidos (Array& arreglo, number valor) {
    size cantidad = 0;
    for (size i = 0; i < arreglo.second; ++i)
        if (arreglo.first[i] == valor)
            cantidad++;
    return cantidad;
}

Array generar_arreglo_repetidos (Array& arreglo,
                                 number valor, size repeticiones) {
    number* repetidos = new number[repeticiones];
    size cantidad = 0;
    size j = 0;
    for (size i = 0; i < arreglo.second; ++i)
        if (arreglo.first[i] == valor)
            repetidos[j++] = i;
    return Array{repetidos,repeticiones};
}