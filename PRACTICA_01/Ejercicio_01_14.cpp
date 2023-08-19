// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 12

// Problema planteado: Escriba un programa que dato varios valores numéricos, hasta el que el usuario ingrese
// el valor de cero calculo la suma y el promedio de estos

#include <iostream>

using namespace std;
int num = -1, suma, numNumber = -1;

int main(){

    // Pide números y los suma hasta que el usuario ingrese 0
    while(num != 0){
        cout << "Ingrese un numero: ";
        cin >> num;
        numNumber++;
        suma = suma + num;
    }
    cout << "\nLa suma de los numeros es: " << suma << endl;
    cout << "El promedio es: " << suma/numNumber << endl;
    return 0;
}
