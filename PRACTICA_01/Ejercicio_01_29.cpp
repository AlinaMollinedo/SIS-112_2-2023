// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 29

// Problema planteado: En una llantería se ha establecido una promoción de las llantas marca “Ponchadas”,
// dicha promoción consiste en lo siguiente:
// Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se
// compran de cinco a 10 y de 200 Bs. si se compran más de 10.
// Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las
// llantas que compra y la que tiene que pagar por el total de la compra.

#include <iostream>

using namespace std;
int total;

int main(){
    
    cout << "Ingrese la cantidad de llantas: ";
    cin >> total;

    if(total < 5){
        cout << "Debe " << 300 * total << " bs, 300bs. por llanta." << endl;
    }
    else{
        if(total >=5 && total <= 10){
            cout << "Debe " << 250 * total << " bs, 250bs. por llanta." << endl;
        }
        else{
            cout << "Debe " << 200 * total << " bs, 200bs. por llanta." << endl;
        }
    }
    return 0;
}