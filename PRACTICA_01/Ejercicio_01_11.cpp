// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 11

// Problema planteado: Se tiene el pago de un docente de la UCB de planilla permanente y planilla contrato
// civil. Se paga por categoría de acuerdo con la siguiente tabla.
// Categoria Permanente Contrato Civil
// A         25%        18%
// B         20%        14%
// C         15%        12%
// Calcule el total ganado siendo el salario por hora de 150 Bs por hora
// Se debe ingresar cuantas horas a la semana pasa clases y en que categor�a est�.

#include <iostream>
#include <cctype>

using namespace std;
double classHours, salary;
char category;

int main(){

    cout << "Ingrese cuantas horas da clases a la semana: ";
    cin >> classHours;
    cout << "Ingrese su categoria: ";
    cin >> category;

    salary = classHours * 150;

    // Perminte identificar la categoría aunque el usuario ingrese una letra minúscula
    // Imprime el contrato permanente y civil de la categoría ingresada
    switch(toupper(category))
    {
    case 'A':
        cout << "Permanente: " << salary * 0.25 << endl;
        cout << "Contrato civil: " << salary * 0.18 << endl;
        break;
    case 'B':
        cout << "Permanente: " << salary * 0.2 << endl;
        cout << "Contrato civil: " << salary * 0.14 << endl;
        break;
    case 'C':
        cout << "Permanente: " << salary * 0.15<< endl;
        cout << "Contrato civil: " << salary * 0.12 << endl;
        break;
    default:
        cout << "Invalido" << endl;
    }

    return 0;
}



