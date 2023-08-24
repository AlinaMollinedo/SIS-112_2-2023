// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 21/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 52

// Problema planteado: Obtener xy utilizando productos sucesivos, tanto x como y son enteros positivos o
// negativos.

#include <iostream>
#include <cmath>

using namespace std;
int x, y, prod;

int main(){

    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;

    for(int i = 0; i < abs(x); i++){
        prod = prod + y;
    }

    // Si el primer valor ingresado es negativo, se multiplica el resultado por -1
    if (x < 0){
        prod = prod * (-1);
    }
    
    cout << "Producto: " << prod << endl;
    return 0;
}