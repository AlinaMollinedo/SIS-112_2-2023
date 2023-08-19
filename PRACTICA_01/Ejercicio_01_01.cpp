// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 1

// Problema planteado: Área de un triángulo

#include <iostream>

using namespace std;
float height, base, area;

int main() {

    cout  << "Ingrese la altura del triangulo: " << endl;
    cin >> height;
    cout  << "Ingrese la base del triangulo: " << endl;
    cin >> base;

    area = base*height/2; //Calcula el area del triangulo

    cout << "El area del triangulo es: " << area << endl;
    return 0;
}
