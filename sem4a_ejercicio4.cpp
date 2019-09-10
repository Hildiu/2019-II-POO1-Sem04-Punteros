#include <iostream>
using namespace std;

int main() {
    int numero1;
    int numero2;
    int* enteroPtr1;
    int* enteroPtr2;
    cout << "Numero 1: ";
    cin >> numero1;
    cout << "Numero 2: ";
    cin >> numero2;
    // Punteros apuntan a enteros ingresados por usuario
    enteroPtr1= &numero1;
    enteroPtr2= &numero2;
    if (*enteroPtr1 %2 == 0)
        cout<<"El primer"<<" numero ingresado es par "<<endl;
    else
        cout<<"El primer"<<" numero ingresado es impar "<<endl;
    if (*enteroPtr2 %2 == 0)
        cout<<"El segundo"<<" numero ingresado es par "<<endl;
    else
        cout<<"El segundo"<<" numero ingresado es impar "<<endl;

    return 0;
}