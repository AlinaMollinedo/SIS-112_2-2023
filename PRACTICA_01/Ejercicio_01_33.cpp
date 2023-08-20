// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 33

// Problema planteado: Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos
// los meses de 30 días. 


#include <iostream>
#include <cmath>

using namespace std;
int mon1, day1, mon2, day2, mons, days;

int main(){

    cout << "Ingrese el dia de la primera fecha: ";
    cin >> day1;
    cout << "Ingrese el mes de la primera fecha: ";
    cin >> mon1;

    cout << "\nIngrese el dia de la segunda fecha: ";
    cin >> day2;
    cout << "Ingrese el mes de la segunda fecha: ";
    cin >> mon2;

    // No permite que se introduzcan fechas inexistentes
    if(day1 > 0 && day1 < 31 && day2 > 0 && day2 < 31 && mon1 > 0 && mon1 < 13 && mon2 > 0 && mon2 < 13){
        mons = 30 * abs(mon1 - mon2); // Transforma la diferencia de los meses en dias
        days = abs(day1 - day2) + mons; // Suma los meses en dias a la diferencia de los dias
    }
    else{
        cout << "Invalido." << endl;
    }

    cout << "Hay " << days << " dias de diferencia entre las fechas." << endl;
    return 0;
}