#include <iostream>
#include <sstream>
using namespace std;

void convertir(long int* segundos, long int &h, long int &m, long int &s) {
    h = *segundos/3600;
    *segundos = *segundos%3600;
    m = *segundos/60;
    s = *segundos%60;
}

int main() {
    long int segundos;
    long int horas, min, seg;
    long int segundosInicio;
    long int segundosFin;
    long int totalSegundos;

    do{
        cout<<"Segundos Hora 1: ";
        cin>>segundosInicio;
        cout<<"Segundos Hora 2: ";
        cin>>segundosFin;

    } while (segundosInicio < 1 || segundosFin<1);

    totalSegundos = segundosFin - segundosInicio;

    convertir(&totalSegundos, horas, min, seg);
    cout<<"Equivalen a: ";
    cout<<horas<<":"<<min<<":"<<seg<<"\n";



    return 0;
}



