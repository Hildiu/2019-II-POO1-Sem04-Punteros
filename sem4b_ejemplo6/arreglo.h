#ifndef EJEMPLO6_ARREGLO_H
#define EJEMPLO6_ARREGLO_H

#ifndef TEST_ARREGLO_H
#define TEST_ARREGLO_H

#include <random>
#include <utility>

typedef  double number;
typedef int size;
typedef void Void;
typedef std::pair<number*, size>  Array;
typedef std::random_device device;
typedef std::uniform_int_distribution<size> distribution;

number randint(number first, number last);
Array generar_arreglo_aleatorio(size n, size first, size last);
Void liberar_arreglo(Array& arreglo);
Void mostrar_arreglo(Array& arreglo);
Array copiar_arreglo(Array& arreglo);
size contar_repetidos (Array& arreglo, number valor);
Array generar_arreglo_repetidos (Array& arreglo,
                                 number valor, size repeticiones);

#endif //TEST_ARREGLO_H


#endif //EJEMPLO6_ARREGLO_H
