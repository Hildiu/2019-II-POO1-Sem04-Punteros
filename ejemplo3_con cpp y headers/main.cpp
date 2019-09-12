#include <iostream>
#include "FuncionesEjemplo3_1x.h"
using namespace std;

int main() {
    tipo_Real *p,*q;
    tipo_Entero N, ocurrencias,j, NArrayNuevo;
    tipo_Real sumaElementos=0;
    tipo_Real promedioElementos;
    tipo_Real menor, promedio=0;
    do{
        cout<<"Ingrese N: ";
        cin>>N;
    } while(N<=5);

    p = new tipo_Real[N];
    // Ingreso de notas
    p=ingresaNotas(N);
    // Imprime elementos del arreglo
    imprimeNotas(p,N);
    //Calcula promedio
    promedio= calculaPromedio(p,N);
    cout<<"\nEl promedio es: "<<promedio;
    // Imprimir solo aquellos por encima del promedio
    imprimeNotasMayoresPromedio(p,N, promedio);
    // Imprimir la mayor nota
    imprimeMayorNota(p,N);

    // Imprimir el promedio sin considerar la menor nota

    // 1. Encontrar la menor nota
    menor=calculaMenorNota(p,N);
    cout << "\nLa menor nota es:" << menor << endl;
    // Calcular el numero de ocurrencias de menor
    for(size_t i = 0; i < N ;i++) {
        if (p[i]==menor)
            ocurrencias++;
    }

    //2. Copiar elementos distintos al menor a otro Array dinámico
    cout<<"Nuevo array sin elemento menor"<<endl;
    q = new tipo_Real[N-ocurrencias];
    NArrayNuevo=N-ocurrencias;
    j=0; //indice en nuevo arreglo q
    for(size_t i = 0; i < N ;i++) {
        if (p[i]!=menor){
            q[j]=p[i];
            cout<<q[j]<<" ";  //Imprime elemento  recién copiado
            j++;
        }
    }
    //3. Calculo del promedio sin el elemento menor
    for(size_t i = 0; i < NArrayNuevo ;i++)
        sumaElementos=sumaElementos+q[i];
    promedioElementos=sumaElementos/NArrayNuevo;

    cout<<"\n El nuevo promedio es:"<<promedioElementos;

}