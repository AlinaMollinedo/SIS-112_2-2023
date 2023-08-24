// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 21/08/2023

// Fecha modificación: 21/08/2023

// Número de ejericio: 51

// Problema planteado: Dados dos números enteros, realizar el algoritmo que calcule el cociente y el resto. El
// método para obtener el cociente y el resto es por restas sucesivas 


#include <iostream>

using namespace std;
int a, b, cociente;

int main(){

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    while(a >= b){
        a = a - b;
        cociente++; // Cuenta cuantas veces 'b'entra en 'a'
    }
    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << a << endl;
    return 0; 
}