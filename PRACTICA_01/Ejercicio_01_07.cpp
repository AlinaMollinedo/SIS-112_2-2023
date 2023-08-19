// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 7

// Problema planteado: Numero amigo


#include <iostream>

using namespace std;
int num1, num2, divider1, divider2;

int main() {

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Suma los divisores de cada número, excepto el 1
    for(int i=2; i<num1; i++){
        if(num1%i == 0){
            divider1 = divider1 + (num1/i);
        }
    }
    for(int i=2; i<num2; i++){
        if(num2%i == 0){
            divider2 = divider2 + (num2/i);
        }
    }

    if((divider1 + 1 == num2) && (divider2 + 1 == num1)){
        cout << "Son numeros amigos." << endl;
    }
    else{
        cout << "No son numeros amigos." << endl;
    }

    return 0 ;
}
