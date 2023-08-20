// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023
 
// Número de ejericio: 

// Problema planteado: La comercial “La Estrella del Sur” vende n productos en un día, de los cuales factura al
// precio de cada uno con un IVA del 13% y si el monto final se excede en 2500 Bs, se
// aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el día y
// calcular el pago del IVA del 13% al servicio de Impuestos Nacionales. 


#include <iostream>

using namespace std;
int n;
double sales = 0, iva = 0, value;

int main(){

    cout << "Ingrese la cantidad de ventas: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << "\nVenta #" << i << endl;
        cout << "Ingrese el valor de la venta: ";
        cin >> value;

        if(value > 2500){
            value = value * 0.95;
        }

        sales = sales + value * 0.87;
        iva = iva + value * 0.13;
    }
    cout << "\nVentas del dia: " << sales << " Bs." << endl;
    cout << "Pago del IVA: " << iva << " Bs." << endl;
    return 0;
}
