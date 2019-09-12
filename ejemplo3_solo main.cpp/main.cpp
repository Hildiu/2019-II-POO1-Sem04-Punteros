#include <iostream>
using namespace std;

int main() {
    float *p,*q;
    int N, ocurrencias,j, NArrayNuevo;
    float suma=0; float sumaElementos=0;
    float promedioElementos;
    float promedio=0;

    do{
        cout<<"Ingrese N: ";
        cin>>N;
    } while(N<=15);

    p = new float[N];
    // Ingreso de notas
    for(size_t i = 0; i < N ;i++) {
        cout << "Ingrese nota "<<i+1<<": ";
        cin >> p[i];
        suma=suma+p[i];
    }
    promedio = suma/N;
    // Imprimir solo aquellos por encima del promedio
    cout<<"\nNotas por encima de la nota promedio "<<promedio<<endl;
    for(size_t i = 0; i < N ;i++) {
        if (p[i]>promedio) {
            cout << p[i]<<" ";
        }
    }

    // Imprimir la mayor nota
    cout<<"\nLa mayor nota"<<endl;
    float mayor=0;
    for(size_t i = 0; i < N ;i++) {
        cout<<p[i]<<" ";
        if (p[i]>mayor)
            mayor = p[i];
    }
    cout << "\nLa mayor nota es:" <<mayor<<endl;

    // Imprimir el promedio sin considerar la menor nota
    // 1. Encontrar la menor nota
    float menor=20;
    for(size_t i = 0; i < N ;i++) {
        cout<<p[i]<<" ";
        if (p[i]<menor)
            menor = p[i];
    }
    cout << "\nLa menor nota es:" <<menor<<endl;
    // Calcular el numero de ocurrencias de menor
    for(size_t i = 0; i < N ;i++) {
        if (p[i]==menor)
            ocurrencias++;
    }


    //2. Copiar elementos distintos al menor a otro Array dinámico
    cout<<"Nuevo array sin elemento menor"<<endl;
    q = new float[N-ocurrencias];
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