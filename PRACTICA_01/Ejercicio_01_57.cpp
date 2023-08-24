// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 57

// Problema planteado: Encontrar cuadrados perfectos en el rango 1 a n


#include <iostream>

using namespace std;
int n;

int main(){
    cout << "Ingrese un numero: ";
    cin >> n;

    // Compara si cada numero del 1 a 'n' es el cuadrado de otro numero en el mismo rango
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i == j * j){ 
                cout << i << endl;
            }
        }
    }
    return 0;
}