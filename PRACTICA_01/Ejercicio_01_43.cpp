// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 43

// Problema planteado: Obtener el promedio de números enteros positivos introducidos por teclado, el
// algoritmo se detiene cuando se lea un número negativo o cero.


#include <iostream>

using namespace std;
double num, suma = 0, n;

int main(){

    do{
        cout << "Ingrese un numero: ";
        cin >> num;

        suma = suma + num;
        n++;
    }
    while(num > 0);
    cout << n;
    cout << "El promedio de los numeros ingresados es: " << suma / (n - 1) << endl; // Calcula el promedio y lo imprime
    return 0;
}