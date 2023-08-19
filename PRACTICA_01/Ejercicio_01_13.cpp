// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 13

// Problema planteado: Indique la cantidad de dígitos que tiene un número entero

#include <iostream>

using namespace std;
int num, digit;

int main(){

    cout << "Ingrese un numero: ";
    cin >> num;
    
    // Saca la cantidad de dígitos de un número mediante divisiones sucesivas
    while(num != 0){
        num = num/10;
        digit++;
    }
    cout << "El numero tiene " << digit << " digitos." << endl;
    return 0;
}




