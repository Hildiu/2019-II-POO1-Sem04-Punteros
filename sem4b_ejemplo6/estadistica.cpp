#include <cmath>
#include "estadistica.h"

number calcular_promedio (Array& arreglo) {
    number total = 0;
    for(int i = 0; i < arreglo.second; ++i)
        total += arreglo.first[i];
    return total / double(arreglo.second);
}


number obtener_moda(Array& arreglo) {
    number cur_value = arreglo.first[0];
    number cur_n = 1;
    number max_value = arreglo.first[0];
    size max_n = 1;
    for (int i = 1; i < arreglo.second; ++i) {
        if (arreglo.first[i] == cur_value)
            cur_n++;
        else {
            if (cur_n >= max_n) {
                max_value = cur_value;
                max_n = cur_n;
            }
            cur_value = arreglo.first[i];
            cur_n = 1;
        }
    }
    if (cur_n > max_n)
        max_value = arreglo.first[arreglo.second - 1];

    return max_value;
}
number calcular_mediana (Array& arreglo) {
    if (arreglo.second % 2 != 0)
        return arreglo.first[(arreglo.second+1)/2];
    else {
        auto mid =  arreglo.second / 2;
        return 1/2.0 * (arreglo.first[mid] + arreglo.first[mid + 1]);
    }
}
number calcular_desviacion_media (Array& arreglo) {
    number desviacion_total = 0;
    number promedio = calcular_promedio(arreglo);
    for(int i = 0; i < arreglo.second; ++i)
        desviacion_total += fabs(arreglo.first[i]-promedio);
    return desviacion_total / double(arreglo.second);
}
number calcular_varianza(Array& arreglo) {
    number varianza_total = 0;
    number promedio = calcular_promedio(arreglo);
    for(int i = 0; i < arreglo.second; ++i)
        varianza_total += (arreglo.first[i]-promedio)*(arreglo.first[i]-promedio);
    return varianza_total / double(arreglo.second);
}
number calcular_desviacion_estandar (Array& arreglo) {
    return sqrt(calcular_varianza(arreglo));
}