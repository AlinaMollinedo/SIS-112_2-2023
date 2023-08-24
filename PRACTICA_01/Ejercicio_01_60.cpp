// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 60

// Problema planteado: Los cubos de Nicómaco. Considera la siguiente propiedad descubierta por Nicómaco de
// Gerasa: Sumando el primer impar, se obtiene el primer cubo. Sumando los dos
// siguientes se obtiene el segundo cubo. Sumando los tres siguientes, se obtiene el
// tercer cubo, etc.
// Es decir: 1 = 13,
// 3 + 5 = 23 = 8,
// 7 + 9 + 11 = 33 = 27,
// 13 + 15 + 17 + 19 = 43 = 64.
// Elabore un programa en el que dado un número n entero positivo, imprima los n
// primeros cubos utilizando esta propiedad.


#include <iostream>

using namespace std;
int n, x = 1, counter = 0;

int main(){
    cout << "Ingrese un numero: ";
    cin >> n;

    for(int i = 0; i < n; i++){ // Repite el proceso 'n' veces
        int suma = 0;
        // Suma los impares correspondientes
        for(int j = x; j <= x + 2 * i; j = j + 2){
            suma = suma + j;
        }
        cout << suma << endl;;
        x  = x + 2 * (i + 1); // Determina el comienzo de 'j' para la siguiente vuelta
    }
    return 0;
}

