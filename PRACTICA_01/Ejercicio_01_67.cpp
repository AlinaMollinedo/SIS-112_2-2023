// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 24/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 67

// Problema planteado:  Leer un número entero y determinar si la suma de sus dígitos distintos de cero forman
// un número primo, de ser así imprima el mensaje respectivo.

#include <iostream>

using namespace std;
int n, suma, divider;

int main(){
    cout << "Ingrese un numero: ";
    cin >> n;

    // Suma los digitos del numero
    while(n != 0){
        suma = suma + (n % 10);
        n = n / 10;
    }

    // Cuenta los divisores de la suma
    for(int i = 2; i < suma; i++){
        if(suma % i == 0){
            divider++;
        }
    }
    if(divider == 0){ // Determina si la suma es un numero primo o no en base a su cantidad de divisores
        cout << "La suma de los digitos del numero es un numero primo: " << suma << endl;
    }
    else{
        cout << "La suma de los digitos del numero NO es un numero primo: " << suma << endl;
    }
    return 0;
}