// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 24

// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros dígitos.

#include <iostream>

using namespace std;
int num, digits;

int main(){

    cout << "Ingrese un numero: ";
    cin >> num;

    // Suma el módulo del número dividido entre 10 dos veces
    for(int i = 0; i < 2; i++){
        digits = digits + (num % 10);
        num = num / 10;
    }

    cout << "La suma de los primeros dos digitos del numero es: " << digits << endl;
    return 0;
}
