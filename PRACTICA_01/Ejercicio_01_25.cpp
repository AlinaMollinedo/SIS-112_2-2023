// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 25

// Problema planteado:  Escribir un programa que permita adivinar un número que sea genere internamente al
// azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a
// aproximaciones, para lo cual se dispone de 5 intentos.

#include <iostream>
#include<cstdlib>

using namespace std;
int n, x = rand() % 51, limInf = 0, limSup = 50;

int main(){

    for(int i = 1; i <= 5; i++){
        cout << "Intento " << i << ": ";
        cin >> n;

        if(n < limInf || n > limSup){ // Limita a las entradas al intervalo definido
            cout << "Invalido" << endl;
        }
        else{
            if (n == x){
            cout << "Felicidades. Adivinaste el numero!" << endl;
            break;
            }
            else{
                // Cambia los limites del intervalo de acuerdo a los intentos del usuario
                if(n > x){
                    limSup = n;
                    cout << "El numero esta entre " << limInf << " y " << limSup << endl;
                }
                else{
                    limInf = n;
                    cout << "El numero esta entre " << limInf << " y " << limSup << endl;                    
                }
            }
            }
   
    }
    return 0;
}