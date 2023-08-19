// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 19

// Problema planteado: Convertir coordenadas polares en rectangulares.
#include <iostream>
#include <cmath>
using namespace std;
double radius, angle, xCoor, yCoor;

int main(){

    cout << "Ingrese la amplitud: ";
    cin >> radius;

    cout << "Ingrese el angulo en radianes: ";
    cin >> angle;

    // Calcula las coordenadas x, y 
    xCoor = radius * cos(angle);
    yCoor = radius * sin(angle);

    cout << xCoor << " j" << yCoor << endl;
    return 0;
}