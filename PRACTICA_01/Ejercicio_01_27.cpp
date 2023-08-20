// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 27

// Problema planteado: Crear un programa que indique si un número es perfecto o no, se dice que un número
// es perfecto si la suma de sus divisores es igual al número.
// Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el número 6 es
// perfecto, si el número es 9 tiene como divisores 1, 3, entonces 1+3=4 no es perfecto.

#include <iostream>

using namespace std;
int num, suma = 0;

int main(){

    cout << "Ingrese un numero: ";
    cin >> num;

    // Saca los divisores del número y los suma
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            suma = suma + i;
        }
        else{
            continue;
        }
    }
    if(suma == num){
        cout << "El numero es perfecto." << endl;
    }
    else{
        cout << "El numero no es perfecto." << endl;
    }
    return 0;
}