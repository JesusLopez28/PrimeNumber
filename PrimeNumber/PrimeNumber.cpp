#include <iostream>
#include "PrimeNumber.h"
using namespace std;

int main(){
    int opc = 1, number;
    cout << "----------Numeros primos----------" << endl;
    cout << "Jesus Alejandro Lopez Rosales-22110104-2|O" << endl << endl << endl;
    system("pause");
    system("cls");

    while (opc == 1) {
        cout << "Ingrese el limite de impresion de numeros primos: ";
        cin >> number;
        system("cls");
        if (number != 1 && number != 0) {
            PrimeNumber PN(number);
            PN.print();
        }
        else cout << "No hay nada que mostrar" << endl;
        system("pause");
        system("cls");
        cout << "Desea repetir el programa:" << endl;
        cout << "1.-Si" << endl;
        cout << "0.-No" << endl;
        cout << "Elige una opcion: ";
        cin >> opc;
        system("cls");
    }
    system("cls");
    cout << "Gracias por usar el programa. FIN" << endl;
    return 0;
}