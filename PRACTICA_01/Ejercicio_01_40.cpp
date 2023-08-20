// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 40

// Problema planteado: Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas:
// 5 Bs. 1 Bs. 0.50 Bs. 0.20 Bs. y 0.10 Bs.. Realizar el programa en el que dado el precio
// del artículo y la cantidad en bolivianos entregada por el consumidor nos indique el
// cambio a entregar empleando el menor número posible de monedas.


#include <iostream>

using namespace std;
double value, payed, change, changeCopy;
int five, one, fifty, twenty, ten;

int main(){

    cout << "Ingrese el precio del producto: ";
    cin >> value;
    cout << "Ingrese el monto pagado: ";
    cin >> payed;

    change = payed - value;
    changeCopy = change;

    // Cuentan las monedas necesarias para el cambio
    while(change >= 5){
        change = change - 5;
        five++;
    }
    while(change >= 1){
        change = change - 1;
        one++;
    }
    while(change >= 0.5){
        change = change - 0.5;
        fifty++;
    }
    while(change >= 0.2){
        change = change - 0.2;
        twenty++;
    }
    while(change >= 0.1){
        change = change - 0.1;
        ten++;
    }

    cout << "\nSu cambio es de: " << changeCopy << endl;
    cout << five << " monedas de 5 Bs." << endl;
    cout << one << " monedas de 1 Bs." << endl;
    cout << fifty << " monedas de 0.50 Bs." << endl;
    cout << twenty << " monedas de 0.20 Bs." << endl;
    cout << ten << " monedas de 0.10 Bs." << endl;
    return 0;
}