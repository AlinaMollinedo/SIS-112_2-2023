// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 32

// Problema planteado: Leer un número entero y mostrarlo con las cifras al revés.


#include <iostream>
#include <cmath>

using namespace std;
int num, n, digits;
double rev = 0;

int main(){

    cout << "Ingrese un numero: ";
    cin >> num;

    // Obtiene los dígitos del número
    n = num;
    while(n != 0){
        n = n / 10;
        digits++;
    }

    // Multiplica cada dígito del número por la potencia de 10 correspondiente para revertir sus cifras
    for(int i=digits-1;i>=0;i--){
        rev = rev + ((num % 10) * pow(10,i));
        num = num / 10;
    }

    cout << "El numero con las cifras al reves es: " << rev << endl;
    return 0;
}