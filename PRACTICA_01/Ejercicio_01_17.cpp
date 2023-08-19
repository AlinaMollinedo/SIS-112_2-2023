// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 16

// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas

#include <iostream>
#include <iomanip>

using namespace std;
double bs, sus, eu, pnd;

int main(){

    cout << "Ingrese un valor en bolivianos: " << endl;
    cin >> bs;

    eu = bs / 7.53; // Transforma los bolivianos a Euros
    sus = bs / 6.96; // Transforma los bolivianos a Dólares
    pnd = bs / 8.80; // Transforma los bolivianos a Libras Esterlinas

    cout << "En euros: " << fixed << setprecision(2) << eu << endl;
    cout << "En dolares: " << fixed << setprecision(2) << sus << endl;
    cout << "En libras esterlinas: " << fixed << setprecision(2) << pnd << endl;
    return 0;
}
