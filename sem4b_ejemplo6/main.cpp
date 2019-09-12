#include <iostream>
#include <algorithm>
#include "arreglo.h"
#include "estadistica.h"

int main() {
    size n = 0;
    std::cout << "Ingrese la cantidad de valores: ";
    std::cin >> n;

    auto arreglo = generar_arreglo_aleatorio(n, 1, 30);
    mostrar_arreglo(arreglo);

    auto ordenado = copiar_arreglo(arreglo);
    std::sort(ordenado.first, ordenado.first + ordenado.second);
    mostrar_arreglo(ordenado);

    std::cout << "\nPromedio : " << calcular_promedio(arreglo);
    std::cout << "\nModa : " << obtener_moda(ordenado);
    std::cout << "\nMediana : " << calcular_mediana(arreglo);
    std::cout << "\nDesviacion Media : " << calcular_desviacion_media(arreglo);
    std::cout << "\nVarianza : " << calcular_varianza(arreglo);
    std::cout << "\nDesviacion Estandar : " << calcular_desviacion_estandar(arreglo);

    liberar_arreglo(arreglo);
    liberar_arreglo(ordenado);
    return 0;
}