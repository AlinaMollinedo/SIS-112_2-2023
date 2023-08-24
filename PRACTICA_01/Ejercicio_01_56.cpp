// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 56

// Problema planteado: Generar (para un orden n):
// Sea n=5:
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1


#include <iostream>

using namespace std;
int n;

int main(){
    cout << "Ingrese un numero: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i + j) % 2 == 0){ // Si la suma de los componentes de la posicion de la matriz es par, imprime un uno
                cout << "1 ";
            }
            else{ // Si es impar, imprime cero
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}