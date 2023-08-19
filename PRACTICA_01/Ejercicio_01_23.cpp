// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 23

// Problema planteado: Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos
// correspondientes a la conjetura de Ullman (en honor al matemático Ullman) que
// consiste en lo siguiente:
// - Empiece con cualquier entero positivo.
// - Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
// - Obtenga enteros sucesivamente repitiendo el proceso.
// Al final se obtendrá el número 1, independientemente del entero inicial. Por ejemplo,
// cuando el entero inicial es 26, la secuencia será:
// 26 13 40 20 10 5 16 8 4 2 1

#include <iostream>

using namespace std;
int n;

int main(){

    cout << "Ingrese un numero entero mayor que uno: ";
    cin >> n;

    if(n <= 1){ // Limita la entrada a números mayores que uno
        cout << "Invalido." << endl;
    }
    else{
        // Distingue entre pares e impares
        // Aplica la conjetura de Ullman
        if(n % 2 == 0){
            while(n >= 1){
                cout << n << endl;
                n = n/2;
            }
        }
        else{
            while(n > 1){
                n = (n / 3) + 1;
                cout << n << endl;
            }
        }
    }
    return 0;
}
