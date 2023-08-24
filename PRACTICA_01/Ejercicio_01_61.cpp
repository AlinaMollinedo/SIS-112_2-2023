// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 61

// Problema planteado: Sean los datos m y n enteros positivos, Elabore un diagrama de flujo para calcular el
// Máximo Común Divisor y el Mínimo Común Múltiplo de m y n. El Algoritmo de Euclides
// establece que, si m>=n, MCD(m,n) = MCD(n, m mod n). 


#include <iostream>

using namespace std;
int m, n, MCD, mcm = 1, num;

// Declara la funcion que calcula el MCD mediante el Algoritmo de Euclides
int mcd(int a, int b){ 
    int c;
    while(a % b != 0){
        c = a;
        a = b;
        b = c % b;
    }
    return b;
}

int main(){
    cout << "Ingrese el primer numero: ";
    cin >> m;
    cout << "Ingrese el segundo numero: ";
    cin >> n;

    if(n > m){
        num = n;
        n = m;
        m = num;
    }

    // MCD
    MCD = mcd(m, n); // Calcula el MCD de m y n

    // mcm

    mcm = m / mcd(m, n) * n; // Calcula el mcm de m y n
   
    cout << "El MCD es: " << MCD << endl;
    cout << "El mcm es: " << mcm << endl;
}