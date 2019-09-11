#include <iostream>
#include <iomanip>
#include "FuncionesEjemplo4.h"
using namespace std;

int main() {
  size_t numDatos;
  tipo_Entero *pA, *pMultiplosde5, *pMultiplosde7;
  size_t contMultde5=0, contMultde7=0;

  srand(time(nullptr));
  cout<<"Numero de elementos: ";
  cin>> numDatos;

  pA = new tipo_Entero[numDatos];
  for (size_t i=0; i<numDatos; i++){
      pA[i] = rand()%1000;
      if (pA[i]%5 == 0)
          contMultde5++;
      if (pA[i]%7==0)
          contMultde7++;
  }
  // -- se crea los otros dos arrays
  pMultiplosde5 = new tipo_Entero [contMultde5];
  pMultiplosde7 = new tipo_Entero [contMultde7];
  // -- se llenan los datos segun sea el caso
  size_t indiceMul5=0, indiceMul7=0;
  for(size_t i =0; i<numDatos; i++){
      if (pA[i]%5==0)
          pMultiplosde5[indiceMul5++]=pA[i];
      if (pA[i]%7==0)
          pMultiplosde7[indiceMul7++]=pA[i];
  }
  cout<<"\n\nArray con datos\n";
  imprimir(pA,numDatos);
  cout<<"\n\nArray con los multiplos de 5\n";
  imprimir(pMultiplosde5, contMultde5);
  cout<<"\n\nArray con los multiplos de 7\n";
  imprimir(pMultiplosde7, contMultde7);
  delete [] pA;
  delete [] pMultiplosde5;
  delete [] pMultiplosde7;

  return 0;
}