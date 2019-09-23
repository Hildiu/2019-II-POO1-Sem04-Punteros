#include "ejerc2.h"
#include <iostream>
#include <iomanip>

using namespace std;

void generaMatrizAleatoria(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    int *ptrGenerado;
    int generado=0;
    ptrGenerado=&generado;
    for (tipo_Entero j = 0; j < columnas; j++) {
        for (tipo_Entero i = 0; i < filas; i++) {
            if (j==0) {
                do {
                    generado = 1 + rand() % (15 - 1);
                } while (encontrado (ptrGenerado,ptrMat, i, j) );
                ptrMat[i][j] = generado;
            }
            if (j==1){
                do {
                    generado = 16 + rand() % (30 - 16);
                } while (encontrado (ptrGenerado,ptrMat, i, j) );
                ptrMat[i][j] = generado;
            }


            if (j==2){
                do {
                    generado = 31 + rand() % (45 - 31);
                } while (encontrado (ptrGenerado,ptrMat, i, j) );
                ptrMat[i][j] = generado;
            }

            if (j==3){
                do {
                    generado = 46 + rand() % (60 - 46);
                } while (encontrado (ptrGenerado,ptrMat, i, j) );
                ptrMat[i][j] = generado;
            }

            if (j==4){
                do {
                    generado = 61 + rand() % (75 - 61);
                } while (encontrado (ptrGenerado,ptrMat, i, j) );
                ptrMat[i][j] = generado;
            }


        }
    }
    ptrMat[2][2] = 0;
}

bool encontrado(int *numero, tipo_Entero **ptrMat, size_t filas, size_t columnas) {
    bool rpta;
    for (tipo_Entero m = 0; m < filas; m++) {
        if ((ptrMat[m][columnas] == *numero) && *numero!=0 ){
            rpta=true;
            break;
        }

        else
            rpta=false;
    }
    return rpta;
}



void imprimeMatriz(tipo_Entero **ptrMat, size_t filas, size_t columnas, string titulo){
    cout<<titulo<<"\n";
    cout<<"--------------------"<<"\n";
    cout << setw(8) << "B"<< setw(8) <<"I"<< setw(10) <<"N"<<setw(9) << "G";
    cout << setw(8) << "O"<<"\n";
    for (tipo_Entero i=0;i<filas;i++) {
        for (tipo_Entero j = 0; j < columnas; j++)
            cout << setw(8) << ptrMat[i][j] << " ";
        cout << "\n";
    }
    cout << "\n\n";
}

void informeNumeroAciertos(tipo_Entero **ptrMat, tipo_Entero **ptrMat1, size_t filas, size_t columnas) {
    int coincidencias;
    coincidencias =0;
    int arregloTemporal[columnas];
    int *ptrBuscado;
    int buscado=0;
    ptrBuscado=&buscado;
    char columna;

    for (tipo_Entero j = 0; j < columnas; j++) {    // Columnas
        if (j==0) {columna='B';}
        if (j==1) {columna='I';}
        if (j==2) {columna='N';}
        if (j==3) {columna='G';}
        if (j==4) {columna='O';}
        cout<<"\nCOLUMNA: "<<columna<<endl;
          // Almacena toda la columna
           for (int k=0;k<filas;k++)
               arregloTemporal[k]=ptrMat[k][j];

           //Imprime arreglo temporal.

          for (int k=0;k<filas;k++)
              cout<< arregloTemporal[k]<<endl;
          //Imprime arreglo temporal.
                                                      //Filas
          for (tipo_Entero i = 0; i < filas; i++) {
              buscado = ptrMat1[i][j];
              if (encontrado(ptrBuscado , ptrMat, filas, j)) {
                  cout<<"ACIERTO -> "<<buscado<<"\n";
                  coincidencias++;
              }
          }
    }
    cout<<"\nCoincidencias: "<<coincidencias;
}


void liberaMemoriaMatriz (tipo_Entero **ptrMat, size_t filas){
    for(size_t i=0; i<filas; i++)
        delete [] ptrMat[i];
    // El arreglo de punteros apunta a nullptr
    delete [] ptrMat;
    ptrMat = nullptr;
}