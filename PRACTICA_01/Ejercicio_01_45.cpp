// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 45

// Problema planteado: Calcular la suma de los cuadrados de los primeros 100 primeros números compuestos.


#include <iostream>

using namespace std;
int suma = 0;

int main(){

    for(int i = 1; i < 101; i++){
        int divider = 0;
        // Saca los divisores de cada número
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                divider++;
            }
        }
        // Distingue entre números primos y compuestos
        if(divider > 2){
            cout << "suma = " << suma << endl;
            suma = suma + i * i;
        }
    }
    cout << "La suma de los cuadrados de los primeros 100 primeros numeros compuestos es de: " << suma << endl;
    return 0;
}