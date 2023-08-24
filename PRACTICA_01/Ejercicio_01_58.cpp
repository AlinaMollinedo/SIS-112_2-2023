// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 58

// Problema planteado: Generar:
// 121
// 12321
// 1234321
// 123454321
// 12345654321
// 1234567654321
// 123456787654321
// 12345678987654321 


#include <iostream>

using namespace std;
int n;

int main(){
    cout << "Ingrese un numero: ";
    cin >> n;

    for(int i = 0; i < n - 1; i++){
        for(int j = 1; j < i + 3; j++){ // Imprime los numeros del 1 a i + 2
            cout << j;
        }
        for(int k = i + 1; k > 0; k--){ // Imprime los numeros de i + 1 a 0
            cout << k;
        }
        cout << endl;
    }
    return 0;
}