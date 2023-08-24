// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 21/08/2023

// Fecha modificación: 21/08/2023

// Número de ejericio: 48

// Problema planteado: Dado un rango (A y B) de números enteros, obtener la cantidad de números pares que
// contiene dicho rango.


#include <iostream>

using namespace std;
int a, b, even;

int main(){

    cout << "Ingrese el limite inferior del rango: ";
    cin >> a;
    cout << "Ingrese el limite superior del rango: ";
    cin >> b;

    for(int i = a; i <= b; i++){
        if(i % 2 == 0){ // Determina si el numero es par
            even++;
        }
        else{
            continue;
        }
    }
    cout << "Hay " << even << " numeros pares en el rango." << endl;
    return 0;
}