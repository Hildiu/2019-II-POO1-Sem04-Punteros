#include "FuncionesEjemplo4.h"

void imprimir (tipo_Entero *pArreglo, size_t n)
{
    for (size_t i=0; i<n; i++)
        cout<< setw(5)<<pArreglo[i];
}
