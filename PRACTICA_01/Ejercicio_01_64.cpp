// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 64

// Problema planteado: Leer un numero entero positivo y ordene sus dígitos del menor al mayor, la resultado
// es otro numero entero.

#include <iostream>
#include <cmath>

using namespace std;
int n, dig, low;
double num = 0;

int countDig(int n){ // Declara la funcion para contar dígitos
    while(n != 0){
        dig++;
        n = n / 10;
    }
    return dig;
}

int lowest(int n, int m){ // Determina el menor entre dos numeros
    if(n <= m){
        low = n;
    }
    else{
        low = m;
    }
    return low;
}

int main(){
    cout << "Ingrese un numero: ";
    cin >> n;

    dig = countDig(n);
    int d = dig;
    int digits[dig]; // Crea un vector del tamaño de la cantidad de digitos del numero ingresado
    
    for(int i = 0; i < dig; i++){ // Separa el numero en digitos y los guarda en el vector
        digits[i] = n % 10;
        n = n / 10;
    }

    while(dig > 0){
        int low = 10;
        for(int i = 0; i < d; i++){ // Determina el menor de los digitos
            low = lowest(low, digits[i]);
        }
        for(int i = 0; i < d; i++){ // Convierte el menor de los digitos en el máximo número mayor posible
            if(low == digits[i]){
                digits[i] = 10;
                break;
            }
        }
        num = num + low * pow(10, dig * 1.0 - 1); // Reescribe el número con las cifras ordenadas
        dig--;
    }
    cout << "\nEl numero con las cifras ordenadas es: " << num << endl;
    return 0;
}