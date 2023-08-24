// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 24/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 69

// Problema planteado: Calcular el coeficiente binomial a partir de la lectura de dos números enteros, a partir
// de la relación:

#include <iostream>

using namespace std;
int a, b;
double coeBi;

int factorial(int x){ // Declara la función para calcular factoriales
    int fact = 1;
    for(int i = x; i > 1; i--){
        fact = fact * i;
    }
    return fact;
}

int main(){
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Llama a la funcion para calcular los factoriales correspondientes
    int afact = factorial(a); 
    int bfact = factorial(b);
    int abfact = factorial(a - b);

    coeBi = afact / bfact / abfact; // Calcula el coeficiente binomial

    cout << "El coeficiente binomial es igual a: " << coeBi << endl;
    return 0; 
}