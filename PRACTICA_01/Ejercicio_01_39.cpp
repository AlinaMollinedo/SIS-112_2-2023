// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 39

// Problema planteado: Escriba un programa para leer dos valores enteros distintos entre si, de tal forma que
// si el primer número es mayor al segundo, genere una serie descendente, caso
// contrario muestre una serie ascendente, el factor de incremento o decremento es la
// unidad


#include <iostream>

using namespace std;
int a, b;

int main(){

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    if( a > b){
        for(int i = a; i >= b; i--){ // Va del primer numero al segundo descendentemente
            cout << i << endl;
        }
    }
    else{
        for(int i = a; i <= b; i++){ // Va del primer numero al segundo ascendentemente
            cout << i << endl;
        }
    }
    return 0;
}