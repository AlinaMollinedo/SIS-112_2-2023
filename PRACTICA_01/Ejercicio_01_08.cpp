// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 8

// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una
// hora se cobra 5 Bs adicional por hora.
// Ingrese la cantidad de horas que un vehículo esté estacionado y calcule cuanto debe
// pagar

#include <iostream>

using namespace std;

double numHours, addHour;

int main(){

    cout << "Ingrese la cantidad de horas en que el vehiculo estuvo estacionado: " << endl;
    cin >> numHours;

    if(numHours <= 1){
        cout << "Debe: 7bs." << endl;
    }
    else{
      addHour = (numHours - 1) * 5; // Calcula las horas adicionales
      cout << "Debe: " << addHour + 7 << "bs." << endl;
    }
    return 0;
}
