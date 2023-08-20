// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 28

// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación,
// empleando sumas sucesivas.

#include <iostream>

using namespace std;
int a, b, prod;

int main(){

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Suma 'a' 'b' veces
    for(int i = 0; i < b; i++){
        prod = prod + a;
    }
    cout << "El prodcuto es: " << prod << endl;
    return 0;
}