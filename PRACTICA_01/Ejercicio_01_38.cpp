// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 38

// Problema planteado: En el año 2009 el país A tiene una población de 25 millones y el país B de 19.9
// millones. Las tasas de crecimiento de la población son de 2% y 3% respectivamente.
// Desarrollar un programa para saber en qué año la población del país B supera a la de
// A.


#include <iostream>

using namespace std;
const double rateA = 0.02, rateB = 0.03;
double A = 25, B = 19.9;
int year;

int main(){

    while(A > B){

        // Calcula el crecimiento de cada población
        A = A + A * rateA;
        B = B + B * rateB;
        year++;
    }
    cout << "La poblacion del pais B superara a la del pais A en " << 2009 + year << endl;
    return 0;
}