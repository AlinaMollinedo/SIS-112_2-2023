// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 22

// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento que
// dependerá del número de computadoras que compre. Si las computadoras son menos
// de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de
// computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
// descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada
// computadora es un valor que el usuario ingrese desde el teclado. 

#include <iostream>

using namespace std;

int numComp, price;

int main(){

    cout << "Ingrese el precio de cada computadora: ";
    cin >> price;

    cout << "Ingrese el numero de computadoras que va a comprar: ";
    cin >> numComp;

    // Da el descuento correspondiente al número de computadoras compradas
    if(numComp < 5){
        cout << "Tiene un descuento del 10%, debe: " << price * numComp * 0.9;
    }
    else{
        if(numComp >= 5 && numComp < 10){
        cout << "Tiene un descuento del 20%, debe: " << price * numComp * 0.8;
        }
        else{
            cout << "Tiene un descuento del 40%, debe: " << price * numComp * 0.6;
        }
    }
    return 0;
}