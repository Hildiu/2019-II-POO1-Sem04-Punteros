#include "FuncionesEjemplo3_1x.h"


float* ingresaNotas(size_t elementos){
    float* pA= new float[elementos];
    for(size_t i = 0; i < elementos ;i++) {
        cout << "Ingrese nota "<<i+1<<": ";
        cin >> pA[i];
    }
    return pA;
}

void imprimeNotas(float* arreglo, size_t elementos){
    cout<<"Las notas son: ";
    for(size_t i = 0; i < elementos ;i++) {
        cout << arreglo[i] << " ";
    }
}

float calculaPromedio(float* arreglo, size_t elementos){
    float suma=0;
    float promedio=0;

    for(size_t i = 0; i < elementos ;i++) {
        suma=suma+arreglo[i];
    }
    promedio = suma/elementos;
    return promedio;
}

void imprimeNotasMayoresPromedio(float* arreglo, size_t elementos, float promedio){
    cout<<"\nNotas por encima de la nota promedio "<<promedio<<": ";
    for(size_t i = 0; i < elementos ;i++) {
        if (arreglo[i]>promedio) {
            cout << arreglo[i]<<" ";
        }
    }
}

void imprimeMayorNota(float* arreglo, size_t elementos){
    float mayor=0;
    for(size_t i = 0; i < elementos ;i++) {
        if (arreglo[i]>mayor)
            mayor = arreglo[i];
    }
    cout << "\nLa mayor nota es:" <<mayor<<endl;
}

float calculaMenorNota(float* arreglo, size_t elementos) {
    float menor = 20;
    for (size_t i = 0; i < elementos; i++) {
        if (arreglo[i] < menor)
            menor = arreglo[i];
    }
    return menor;
}