// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 18/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 26

// Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera
// necesidad. Una ama de casa selecciona los artículos de su preferencia pasando por los
// distintos mostradores, cada artículo elegido es colocado en un carrito de mano, para
// asegurar el pago exacto de los artículos comprados la señora anota el precio y la
// cantidad del artículo, estableciendo cuanto pagara por este articulo; así sumara los
// demás artículos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de
// llenar el carrito de manos con todos los artículos de primera necesidad.

#include <iostream>

using namespace std;
double value, suma, quantity;
char flag = 1;

int main(){

    while(flag != 0){
        cout << "Ingrese el precio del producto: ";
        cin >> value;

        cout << "Ingrese la cantidad del producto: ";
        cin >> quantity;

        suma = suma + (quantity * value);

        // Entrada del valor centinela para detener el programa
        cout << "Va a seguir comprando?\tSI | 1\tNO | 0: "; 
        cin >> flag;
        if(flag == '0'){
            break;
        }
        else{
            continue;
        }
    }
    cout << "Total: " << suma << endl;
    return 0;
}
