// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 16

// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas,
// minutos y segundos.

#include <iostream>

using namespace std;
int secs, hours, mins;

int main(){

    cout << "Ingrese un valor en segundos: " << endl;
    cin >> secs;

    // Calcula la cantidad de horas, restándolas del total de segundos
    while(secs >= 3600){
        secs = secs - 3600;
        hours++;
    }
    // Calcula la cantidad de minutos, restándolas del total de segundos
    while(secs >= 60){
        secs = secs - 60;
        mins++;
    }
    cout << hours << ":" << mins << ":" << secs << endl;
    
    return 0;
}