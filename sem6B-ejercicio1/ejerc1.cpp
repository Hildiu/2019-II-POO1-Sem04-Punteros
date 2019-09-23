#include "ejerc1.h"
#include <iostream>
#include <iomanip>

using namespace std;

void generaMatrizAleatoria(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    for (tipo_Entero i=0;i<filas;i++) {
        for (tipo_Entero j = 0; j < columnas; j++)
            ptrMat[i][j] = 0+rand()%(400 -1);
    }
}

void imprimeMatriz(tipo_Entero **ptrMat, size_t filas, size_t columnas){
    cout << setw(8) << "A"<< setw(8) <<"B"<< setw(8) <<"C"<<setw(9) << "D";
    cout << setw(10) << "E"<< setw(10) <<"F"<< setw(8) <<"G"<<setw(10) << "H";
    cout << setw(8) << "I"<< setw(8) <<"J"<<"\n";
    for (tipo_Entero i=0;i<filas;i++) {
        for (tipo_Entero j = 0; j < columnas; j++)
            cout << setw(8) << ptrMat[i][j] << " ";
        cout << "\n";
    }
    cout << "\n\n";
}

tipo_Entero mostrarMenu(){
    int eleccion;
    do {
        cout << "          MENU" << endl;
        cout << "          ----" << endl;
        cout << "     1. Reporte total por necesidad de resane " << endl;
        cout << "     2. Reporte por sector especifico" << endl;
        cout << "     3. Reporte por Letra/Columna " << endl;
        cout << "     4. Salir" << endl;
        cout << "      Elija opcion (1-4): ";
        cin >> eleccion;
    }while (eleccion!=1 && eleccion != 2 && eleccion !=3 && eleccion!=4 );
    return eleccion;
}

void reporteNecesidadResane (tipo_Entero **ptrMat, size_t filas, size_t columnas){
    int cantidadResanes =0;
    string listado="";
    string f,c;
    char letra;
       for (tipo_Entero j = 0; j < columnas; j++) {
            for (tipo_Entero i = 0; i < filas; i++) {
             if (ptrMat[i][j] / 100 ==1) {
                 cantidadResanes++;
                 f=to_string(i);
                 c=to_string(j);
                 switch(j) {
                     case 0: letra ='A';
                         break;
                     case 1: letra ='B';
                         break;
                     case 2: letra ='C';
                         break;
                     case 3: letra ='D';
                         break;
                     case 4: letra ='E';
                         break;
                     case 5: letra ='F';
                         break;
                     case 6: letra ='G';
                         break;
                     case 7: letra ='H';
                         break;
                     case 8: letra ='I';
                         break;
                     case 9: letra ='J';
                         break;
                 }
                 listado=listado+ letra +  f + ": "+to_string(ptrMat[i][j])+", ";
             }
        }
    }
    cout <<" Total sectores que necesitan resane: "<< cantidadResanes<<"\n";
    cout <<" Sectores que necesitan resane: "<< listado<<"\n";
}


void reporteSectorEspecifico (tipo_Entero **ptrMat, size_t filas, size_t columnas) {
    int fila, columna;
    string descripcion;
    char letra;

    cout<<"\nIngrese letra que identifica al sector (A-J): ";
    cin>>letra;
    switch(letra) {
        case 'A': columna=0;
            break;
        case 'B': columna=1;
            break;
        case 'C': columna=2;
            break;
        case 'D': columna=3;
            break;
        case 'E': columna=4;
            break;
        case 'F': columna=5;
            break;
        case 'G': columna=6;
            break;
        case 'H': columna=7;
            break;
        case 'I': columna=8;
            break;
        case 'J': columna=9;
            break;
    }
    cout<<"\nIngrese fila: ";
    cin>>fila;
    if (ptrMat[fila][columna] / 100 ==1)
        descripcion="1 – resanado";
    if (ptrMat[fila][columna] / 200 ==1)
        descripcion="2 - pintado lineas\n";
    if (ptrMat[fila][columna] / 300 ==1)
        descripcion="3 - arreglo pasto";
       cout <<" Este sector contiene : "<< ptrMat[fila][columna] <<"\n";
       cout <<" El trabajo a realizar es: "<< descripcion<<"\n";
}

void reportePorLetra (tipo_Entero **ptrMat, size_t filas, size_t columnas) {
    int fila,columna, totalResanes, totalPintados, totalArreglos;
    char letra;
    string descripcion;
    totalResanes=0;
    totalPintados=0;
    totalArreglos=0;

    cout<<"\nIngrese letra que identifica al sector (A-J): ";
    cin>>letra;
    switch(letra) {
        case 'A': columna=0;
                  break;
        case 'B': columna=1;
                  break;
        case 'C': columna=2;
                  break;
        case 'D': columna=3;
                  break;
        case 'E': columna=4;
                  break;
        case 'F': columna=5;
                  break;
        case 'G': columna=6;
                  break;
        case 'H': columna=7;
                  break;
        case 'I': columna=8;
                  break;
        case 'J': columna=9;
                  break;
    }
    cout<<"\n"<<"Los sectores asociados a la letra "<<letra <<" son: "<<"\n";
    for (tipo_Entero i=0;i<filas;i++) {
        if (ptrMat[i][columna] / 100 ==1) {
            descripcion = "1 - resanado";
            totalResanes++;
        }
        if (ptrMat[i][columna] / 100 ==2) {
            descripcion = "2 - pintado lineas\n";
            totalPintados++;
        }
        if (ptrMat[i][columna] / 100 ==3) {
            descripcion = "3 - arreglo pasto";
            totalArreglos++;
        }
     cout << setw(8) <<"\nsector "<<letra<<i<<": "<< ptrMat[i][columna]<<" "<<descripcion;
     descripcion ="";
    }
    cout<<"\n\nTotal Tipo 1 - resanado: "<<totalResanes;
    cout<<"\nTotal Tipo 2 - pintado lineas: "<<totalPintados;
    cout<<"\nTotal Tipo 3 - arreglo pasto: "<<totalArreglos<<"\n\n\n";
}


void liberaMemoriaMatriz (tipo_Entero **ptrMat, size_t filas){
    for(size_t i=0; i<filas; i++)
        delete [] ptrMat[i];
    // El arreglo de punteros apunta a nullptr
    delete [] ptrMat;
    ptrMat = nullptr;
}