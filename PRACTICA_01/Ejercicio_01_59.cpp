// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 59

// Problema planteado: Conjetura capicúa: Para obtener un número capicúa a partir de otro número se invierte
// el orden de sus cifras y se suman el número dado y el invertido. Este proceso se
// continúa las veces que sean necesarias hasta obtener un capicúa. Por ejemplo:
//  Partiendo del 78.
//  78 + 87 = 165.
//  165 + 561 = 726.
//  726 + 627 = 1353.
//  1353 + 3531 = 4884 CAPICÚA.
// El programa debe intentar encontrar capicúas en el rango N y M



#include <iostream>
#include <cmath>

using namespace std;
int N, M, digits;
double rev, x, og, suma;

int digit(int n){ // Cuenta los digitos del numero ingresado
    digits = 0;
    while(n != 0){
        n = n / 10;
        digits++;
    }
    return digits;
}

int reverse(int n){ // Invierte las cifras del numero ingresado
    rev = 0;
    digits = digit(n);
    for(int i=digits-1;i>=0;i--){
        rev = rev + ((n % 10) * pow(10,i));
        n = n / 10;
    }
    return rev;
}

int main(){
    cout << "Ingrese el limite inferior del rango: ";
    cin >> N;
    cout << "Ingrese el limite superior del rango: ";
    cin >> M;
    cout << "Ingrese un numero: ";
    cin >> x;

    og = x;

    do{
        rev = reverse(og);   

        suma = og + rev;
        cout << og << " + " << rev << " = " << suma << endl;

        if(reverse(suma) == suma){ // Evalua si la suma es un numero capicua
            cout << "Capicua." << endl;
            break;
        }
        else{
            og = suma;
        }
    }
    while(og >= N && og <= M);
    return 0;
}