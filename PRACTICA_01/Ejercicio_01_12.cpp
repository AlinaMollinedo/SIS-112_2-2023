// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 12

// Problema planteado: Mostrar los primero 100 número primos.


#include <iostream>
#include <cctype>

using namespace std;

int main(){

    // Saca los divisores de cada número del 1 al 100
    for(int num = 1; num <= 100; num++){
        int divider = 0;
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                divider++;
            }
            else{
                continue;
            }
        }
        if(divider == 0){
            cout << num << endl; // Si la cantidad de divisores es 0, imprime el número
        }
    }

    return 0;
}

