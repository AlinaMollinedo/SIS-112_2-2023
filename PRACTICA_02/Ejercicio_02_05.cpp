// Materia: Programación I, Paralelo 4

// Autor: Alina Molliendo Dávila

// Fecha creación: 25/08/2023

// Fecha modificación: 25/08/2023

// Número de ejericio: 5

// Problema planteado: Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a
// 240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int height, tallest = 49, shortest = 241, n;
double suma;

int main(){
    cout << "Ingrese la cantidad de estaturas a generar: ";
    cin >> n;

    int v[n];
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        int x = 50 + rand() % (240 - 50); // Genera números al azar entre a y b
        v[i] = x;
        cout << x << " ";
    }

    for(int i = 0; i < n; i++){
        if(v[i] < shortest){
            shortest = v[i];
        }
        else{
            if(v[i] > tallest){
                tallest = v[i];
            }
        }
        suma += v[i];
    }
    cout << "\n\nLa mayor estatura es: " << tallest << " cm." << endl;
    cout << "La menor estatura es: " << shortest << " cm." << endl;
    cout << "La estatura promedio es: " << suma / n << " cm." << endl;
    return 0;
}