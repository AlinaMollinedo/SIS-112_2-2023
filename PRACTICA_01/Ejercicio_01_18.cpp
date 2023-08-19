// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 18

// Problema planteado: Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada

#include <iostream>

using namespace std;
double height, base, volume;

int main(){

    cout << "Ingrese la altura de la piramide: ";
    cin >> height;
    
    cout << "Ingrese la base de la piramide: ";
    cin >> base;

    volume = (base * height)/3; // Calcula el volumen

    cout << "El volumen de la piramide es de: " << volume << endl;
    return 0;
}