// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 62

// Problema planteado: En una guardería hay 25 niños de 1, 2 y 3 años. Los niños de 1 año consumen 6 pañales
// al día, los niños de 2 años consumen 3 pañales diarios y los niños de 3 años consumen
// 2 pañales diarios. Se desea conocer el consumo total de pañales diarios.
// Datos: edad1
//  edad2
//  . . . . .
//  edad25



#include <iostream>

using namespace std;
int age, diapers = 0;

int main(){
    for(int i = 1; i <= 25; i++){
        cout << "\nNinio #" << i << endl;
        cout << "Ingrese la edad del ninio: ";
        cin >> age;

        switch(age){
            case 1: diapers = diapers + 6;
            break;
            case 2: diapers = diapers + 3;
            break;
            case 3: diapers = diapers + 2;
            break;
        }
    }
    cout << "\nEl total es: " << diapers << endl;
    return 0;
}