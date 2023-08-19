// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 15

// Problema planteado: Escriba la sucesión de Fibonacci.

#include <iostream>

using namespace std;
int x, y = 1, z, numTerms;

int main(){

    cout << "Ingrese el numero de terminos a ser imprimidos: ";
    cin >> numTerms;

    // Imprime la cantidad ingresada de términos de la secuencia Fibonacci
    for(int i = 0; i <= numTerms; i++){
        cout << x << endl;
        z = x + y;
        x = y;
        y = z;
    }
    return 0;
}