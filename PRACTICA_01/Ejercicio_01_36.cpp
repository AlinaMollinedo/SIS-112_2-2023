// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 36

// Problema planteado: Dadas las edades y alturas de n alumnos, mostrar la edad y la estatura media, la
// cantidad de alumnos mayores de 18 años, y la cantidad de alumnos que miden más de
// 1.75 cm


#include <iostream>

using namespace std;
double age, sumAge, over18, n, height, sumHeight, over175;

int main(){

    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "\nAlumno #" << i << endl;
        cout << "Ingrese la edad del alumno: ";
        cin >> age;
        cout << "Ingrese la edad del altura en centimetros: ";
        cin >> height;

        // Suman las edades y alturas de los alumnos
        sumAge = sumAge + age;
        sumHeight = sumHeight + height;

        // Cuenta la cantidad de alumnos mayores a 18 y que miden más de 175cm
        if(age >= 18){
            over18++;
        }
        if(height >= 175){
            over175++;
        }
    }
    cout << "\nLa edad media es " << sumAge / n << endl;
    cout << "La altura media es " << sumHeight / n << endl;
    cout << "La cantidad de alumnos mayores a 18 es de " << over18 << endl;
    cout << "La cantidad de alumnos que miden mas que 175cm es " << over175 << endl;
    return 0;
}