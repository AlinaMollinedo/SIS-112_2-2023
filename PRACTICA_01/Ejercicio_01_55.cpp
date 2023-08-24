// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 55

// Problema planteado: Generar las secuencias:
// 1 2 3 4 …………..n
// 1 2 3 4….. n-1
// 1 2 3 …...n-2
// ……..
// 1


#include <iostream>

using namespace std;
int n;

int main(){
    cout << "Ingrese un numero: ";
    cin >> n;

    for(int i = 0; i <= n; i = i){

        // Imprime los numeros del 1 a 'n'
        for(int j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
        n = n - 1; // Disminuye el valor de 'n' en uno
    }
    return 0;
}