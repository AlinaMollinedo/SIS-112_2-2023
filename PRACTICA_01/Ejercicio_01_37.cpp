// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 37

// Problema planteado: Obtenga el factorial de un número entero sin emplear el producto.


#include <iostream>

using namespace std;
int num, n;

int main(){

    cout << "Ingrese un numero: ";
    cin >> num;

    for(int i = num - 1; i > 1; i--){
        int suma = 0;

        // Utiliza sumas sucesivas para multiplicar
        for(int j = 0; j < i; j++){ 
                suma = suma + num;
                n = suma;
            }
        num = n;
    }    
    cout << "Su factorial es: " << num << endl;
    return 0;
}