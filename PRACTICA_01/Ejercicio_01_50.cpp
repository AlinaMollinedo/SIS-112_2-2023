// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 21/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 50

// Problema planteado: Escribe una función que tome 3 parámetros: dos de tipo enteros y uno de tipo carácter.
// La función deberá sumar, restar, multiplicar o dividir los valores de los dos primeros
// parámetros dependiendo del código indicado en el tercer parámetro, y devolver el
// resultado.



#include <iostream>

using namespace std;
int a, b;
char c;

int myFunction(int a, int b, char c){ // Declara la funcion con los parametros requeridos
    switch(c){
        case 's': return a + b;
        break;
        case 'r': return a - b;
        break;
        case 'm': return a * b;
        break;
        case 'd': return a / b;
        break;
    }
    return 0;
} 

int main(){

    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;
    // Indica al usuario los valores de la operacion que desee
    cout << "\nIngrese 's' para sumar los numeros.";
    cout << "\nIngrese 'r' para restar los numeros.";
    cout << "\nIngrese 'm' para multiplicar los numeros.";
    cout << "\nIngrese 'd' para dividir los numeros. " << endl;
    cin >> c;

    int resul = myFunction(a, b, c); // Llama a la funcion y guarda su resultado en 'resul'
    cout << "\nResultado: " << resul << endl;
    return 0;
}