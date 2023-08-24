// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 30

// Problema planteado: Calcular la siguiente sucesión 
// 2 - 3/2 + 4/3 - 5/4 ... + n+1/n

#include <iostream>

using namespace std;
double x = 2;
int terms;

int main(){

    cout << "Ingrese el numero de terminos a utilizar: ";
    cin >> terms;

    // Calcula la secuencia para el número de términos ingresado
    for(double i = 2; i < terms + 1; i++){
        x = x + (i+1)/i;
    }
    cout << "Resultado: " << x << endl;
    return 0;
}
