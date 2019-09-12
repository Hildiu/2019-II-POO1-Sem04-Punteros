#include <iostream>
#include <algorithm>
#include "arreglo.h"

int main() {
    size n = 0;
    std::cout << "Ingrese la cantidad de valores: ";
    std::cin >> n;

    auto arreglo = generar_arreglo_aleatorio(n, 1, 20);
    mostrar_arreglo(arreglo);

    number valor = 0;
    std::cout << "Ingrese el valor a buscar: ";
    std::cin >> valor;

    auto nr = contar_repetidos(arreglo, valor);

    if (nr != 0) {
        auto repetidos = generar_arreglo_repetidos(arreglo, valor, nr);
        mostrar_arreglo(repetidos);
        liberar_arreglo(repetidos);
    }
    else
        std::cout << "Dato no encontrado\n";

    liberar_arreglo(arreglo);

    return 0;
}