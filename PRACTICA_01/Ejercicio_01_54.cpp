// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 54

// Problema planteado: Hallar la raíz cuadrada de un número por aproximaciones, utilizar: Algoritmo Babilónico

#include <iostream>

using namespace std;
double x, b;

int main(){
    cout << "Ingrese un numero: ";
    cin >> x;

    b = x;

    // Aplica el Algoritmo Babilónico
    while(b != x / b){
        b = ((x / b) + b) / 2;
    }

    cout << "La raiz del numero es igual a: " << b << endl;
    return 0;
}