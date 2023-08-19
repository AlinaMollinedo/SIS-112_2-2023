// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 20

// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el
// menor.

#include <iostream>

using namespace std;
int num1, num2, num3, lowest;

int main(){

    cout << "Ingrese un numero: ";
    cin >> num1;

    cout << "Ingrese otro numero: ";
    cin >> num2;

    cout << "Ingrese un numero mas: ";
    cin >> num3;

    if((num1 != num2) || (num1 != num3) || (num2 != num3)){ // Condición para verificar si los números son iguales
        // Determina el menor
        if(num1 < num2){ 
            if(num1 < num3){
                lowest = num1;
            }
            else{
                lowest = num3;
            }
        }
        else{
            if(num2 < num3){
                lowest = num2;
            }
            else{
                lowest = num3;
            }
        }
        cout << "El numero menor es " << lowest << endl;
    }
    else{
        cout << "Los tres numeros son iguales." << endl;
    }
    return 0;
}