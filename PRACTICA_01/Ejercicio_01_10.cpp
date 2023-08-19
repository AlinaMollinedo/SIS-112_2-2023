// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 10

// Problema planteado: Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es
// ninguna letra que diga que es carácter especial.

#include <iostream>
#include <cctype>

using namespace std;

char letter;

int main(){

    cout << "Ingrese una letra: ";
    cin >> letter;

    // Verifica si la letra ingresada pertenece al abecedario
    if(isalpha(letter)){
        if(letter == 'a' || letter == 'i' || letter == 'u' || letter == 'e' || letter == 'o'){
            cout << "La letra es una vocal." << endl;
        }
        else{
            cout << "La letra es una consonante" << endl;
        }
    }
    else{
        cout << "La letra es un caracter especial." << endl;
    }

    return 0;
}


