// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 17/08/2023

// Número de ejericio: 3

// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general.

#include <iostream>

using namespace std;
int num_notas, suma_notas = 0, nota;

int main() {

    cout << "Cuantas notas va a ingresar?:  ";
    cin >> num_notas;

    //Pide las notas y las suma
    for(int i = 0; i < num_notas; i++) {
        cout << "Ingrese la nota: ";
        cin >> nota; 

        suma_notas = nota + suma_notas; 
    }
    cout << "El promedio de las notas es: " << suma_notas / num_notas << endl;
    return 0;
}