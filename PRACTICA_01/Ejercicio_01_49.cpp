// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 21/08/2023

// Fecha modificación: 21/08/2023

// Número de ejericio: 49

// Problema planteado: Escribir un programa que muestre en pantalla, con los encabezados correspondientes,
// el capital (Cn) y los intereses ganados por un capital C0 depositado a un interés
// compuesto I durante N años. C0, I y N se deben leer por teclado. La fórmula a emplear
// es:
// Cn = C0(1+I)n


#include <iostream>

using namespace std;
double Cn, C0, I, N;

int main(){

    cout << "Ingrese el capital depositado: ";
    cin >> C0;
    cout << "Ingrese el interes: ";
    cin >> I;
    cout << "Ingrese la cantidad de anios: ";
    cin >> N;

    Cn = C0 * (1 + I ) * N; // Calcula el capital

    cout << "Capital: " << Cn << endl;
    cout << "Intereses: " << Cn - C0 << endl;
    return 0;
}