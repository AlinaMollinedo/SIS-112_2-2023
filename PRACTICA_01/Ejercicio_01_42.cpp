// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 42

// Problema planteado: En una granja se requiere determinar el promedio de calidad de las n gallinas que hay
// en la granja. La calidad de cada gallina se obtiene según la fórmula:
// Calidad = (peso de la gallina * altura de la gallina)/Numero de huevos que pone


#include <iostream>

using namespace std;
int n;
double weight, height, nEggs, quality;

int main(){

    cout << "Ingrese el numero de gallinas: ";
    cin >> n;

    for(int i = 1; i <=n; i++){
        cout << "\nGallina #" << i << endl;
        cout << "Ingrese el peso de la gallina en kg: ";
        cin >> weight;
        cout << "Ingrese la altura de la gallina en cm: ";
        cin >> height;
        cout << "Ingrese la cantidad de huevos que pone la gallina: ";
        cin >> nEggs;

        quality = weight * height / nEggs; // Calcula la calidad de la gallina

        cout << "-- > Calidad de la gallina: " << quality << endl;
    }
    return 0;
}