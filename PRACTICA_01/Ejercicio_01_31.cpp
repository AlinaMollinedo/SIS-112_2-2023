// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 31

// Problema planteado: Leer dos números y verificar si uno es múltiplo del otro o no lo es

#include <iostream>

using namespace std;
int num1, num2;
bool flag = true;

int main(){

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Divide los números entre sí para determinar si son múltiplos.
    if(num1 % num2 == 0 || num2 % num1 == 0){
        cout << "Un numero es multiplo del otro." << endl;
    }
    else{
        cout << "Ningun numero es multiplo del otro" << endl;
    }
    return 0;
}