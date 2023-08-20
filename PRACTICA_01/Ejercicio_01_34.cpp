// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 34

// Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos


#include <iostream>

using namespace std;
int n, term = 1, termCopy;

int main(){

    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        int digit = 0;
        cout << term << endl;
        termCopy = term;

        // Suma los dígitos del número
        while(term != 0){
            digit = digit + (term % 10); 
            term = term / 10;
        }
        term = termCopy + digit; // Suma el número por la suma de sus dígitos
    }
    return 0;
}