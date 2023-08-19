// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 6

// Problema planteado: Número primo

#include <iostream>
#include  <cmath>

using namespace std;
int num, divider;

int main() {

    cout << "Ingrese un numero: ";
    cin >> num;

    // Saca los divisores del número ingresado
    for(int i=2; i<num; i++){
        if(num%i == 0){
            divider++;
        }
    }

    if(divider !=0){
        cout << "El numero no es primo." << endl;
    }
    else{
        cout << "El numero es primo" << endl;
    }

    return 0 ;
}
