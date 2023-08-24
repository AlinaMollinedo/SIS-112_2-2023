// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 63

// Problema planteado: Leer un valor numérico y convertirlo a un número romano (1-9999)

#include <iostream>
#include <string>

using namespace std;
int n;
string x;

int main(){
    cout << "Ingrese un numero: ";
    cin >> n;

    // Agrega las letras correspondientes a 'roman'
    while(n >= 1000){
        n = n - 1000;
        x = x + 'M';
    }
    while(n >= 500){
        n = n - 500;
        x = x + 'D';
    }
    while(n >= 100){
        n = n - 100;
        x = x + 'C';
    }
    while(n >= 50){
        n = n - 50;
        x = x + 'L';
    }
    while(n >= 10){
        n = n - 10;
        x = x + 'X';
    }
    while(n >= 5){
        n = n - 5;
        x = x + 'V';
    }
    while(n >= 1){
        n = n - 1;
        x = x + 'I';
    }
    cout << "El numero en numeros romanos es: " << x << endl;
    return 0;
}