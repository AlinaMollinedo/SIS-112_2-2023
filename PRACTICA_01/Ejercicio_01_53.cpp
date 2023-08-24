// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 53

// Problema planteado: Escriba un programa que permita al usuario obtener los valores de las funciones
// trigonométricas.

#include <iostream>
#include <cmath>

using namespace std;
double theta;

int main(){
    cout << "Ingrese un angulo en radianes: ";
    cin >> theta;
    
    // Calcula e imprime los resultados del seno, coseno y tangente del angulo ingresado
    cout << "\nEl seno del angulo es: " << sin(theta) << endl;
    cout << "El coseno del angulo es: " << cos(theta) << endl;
    cout << "La tangente del angulo es: " << tan(theta) << endl;
    return 0;
}