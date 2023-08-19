// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 2

// Problema planteado: Volumen de una esfera

#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14159;
float radius, volume;

int main() {

    cout << "Ingres el radio de la esfera: " << endl;
    cin >> radius;

    volume = PI*pow(radius,3)*4/3; //Calcula el volumen de la esfera

    cout << "El volumen de la esfera es: " << volume << endl;
    return 0;
}