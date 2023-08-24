// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 24/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 68

// Problema planteado: Escribir un algoritmo que permita generar 50 números al azar en el rango (1-99) y
// determine cuántos de estos elementos son números primos. 

#include <iostream>
#include <cstdlib>

using namespace std;
int divider, prime;

int main(){
    for(int i = 1; i < 52; i++){
        divider = 0;

        int x = 1 + (rand() % 100); // Genera numeros al azar del 1 al 99
        cout << x << " ";

        for(int i = 2; i < x; i++){ // Cuenta la cantidad de divisores del numero
        if(x % i == 0){
            divider++;
        }
        }
        if(divider == 0){ // Cuenta la cantidad de numeros primos
            prime++;
        }
    }
    cout << "\nHay " << prime << " numeros primos." << endl;
}