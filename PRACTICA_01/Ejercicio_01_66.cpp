// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 66

// Problema planteado: Leer un valor que represente una cierta cantidad de dinero, escribir un algoritmo que
// permita convertir el dicho valor en billetes y monedas, de tal forma que sea la menor
// cantidad de billetes y monedas a convertir.
// Ej: Sea el monto = 655 Bs.
// La salida será:
//  3 billetes de 200 Bs
// 1 billete de 50 Bs.
//  1 moneda de 5 Bs.

#include <iostream>

using namespace std;
int n, i = 0, counter[8], quantity[] = {200, 100, 50, 20, 10, 5, 2, 1};

int main(){
    cout << "Ingrese la cantidad de dinero: ";
    cin >> n;

    // Cuenta la cantidad de billetes y monedas
    while(n >= 200){
        n = n - 200;
        i++;
        counter[0] = i;
    }

    i = 0; // Resetea el valor de i
    while(n >= 100){
        n = n - 100;
        i++;
        counter[1] = i;
    }

    i = 0;
    while(n >= 50){
        n = n - 50;
        i++;
        counter[2] = i;
    }

    i = 0;
    while(n >= 20){
        n = n - 20;
        i++;
        counter[3] = i;
    }

    i = 0;
    while(n >= 10){
        n = n - 10;
        i++;
        counter[4] = i;
    }

    i = 0;
    while(n >= 5){
        n = n - 5;
        i++;
        counter[5] = i;
    }

    i = 0;
    while(n >= 2){
        n = n - 2;
        i++;
        counter[6] = i;
    }

    i = 0;
    while(n >= 1){
        n = n - 1;
        i++;
        counter[7] = i;
    }

    for(int i = 0; i < 8; i++){
        if(counter[i] != 0){
            if(quantity[i] > 5){ // Determina si se trata de billetes o monedas
                cout << counter[i] << " billetes de " << quantity[i] << "Bs." << endl;
            }
            else{
                cout << counter[i] << " monedas de " << quantity[i] << "Bs." << endl;
            }
        }
    }
    return 0;
}