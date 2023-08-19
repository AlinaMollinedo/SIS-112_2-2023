// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 4

// Problema planteado: Conversión de temperatura de grados centígrado a Kelvin

#include <iostream>

using namespace std;
const double K = 273.15;
double celsius;

int main() {
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    // Transforma la temperatura a celsius y la imprime
    cout << "La temperatura en grados Kelvin es: " << celsius + K << endl; 
    return 0 ;
}




