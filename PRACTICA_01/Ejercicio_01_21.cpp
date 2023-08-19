// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 21

// Problema planteado: Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está
// dentro del intervalo obtenga su cuadrado (n*n), si es menor que el límite inferior,
// obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2).

#include <iostream>

using namespace std;
int n, a, b;

int main(){

    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Ingrese el limite inferior del intervalo: ";
    cin >> a;

    cout << "Ingrese el limite superior del intervalo: ";
    cin >> b;

    if(n >= a && n <= b){ // Condición que define si el número es parte del intervalo
        cout << "El cuadrado del numero es: " << n * n << endl;
    }
    else{
        if(n < a){ // Determina si el número está por debajo o por encima del intervalo
            cout << "El valor inverso del numero es: " << 1/n << endl;
        }
        else{
            cout << "La mitad del numero es: " << n/2 << endl;
        }
    }
    return 0;
}