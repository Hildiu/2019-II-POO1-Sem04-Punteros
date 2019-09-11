#include "FuncionesEjemplo2.h"

void intercambiar(tipo_Entero* ptrNum1, tipo_Entero* ptrNum2){
    tipo_Entero auxiliar = *ptrNum1;
    *ptrNum1=*ptrNum2;
    *ptrNum2=auxiliar;
}
