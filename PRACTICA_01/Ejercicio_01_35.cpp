// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 35

// Problema planteado: Un supermercado decide efectuar una promoción de descuentos por el valor de las
// compras que efectúan sus clientes, esta promoción se basa en las siguientes
// condiciones:
// Si el total de ventas es < 100 Bs. no se aplica ningún descuento
// Si el total de ventas es de 100 Bs o más se aplica un 5% de descuento
// Si el total de ventas es 500 Bs o más se aplica un 8% de descuento
// Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el
// total de ventas efectuadas y el total de ventas con el descuento respectivo.

#include <iostream>

using namespace std;
double totalClient, clients, total;

int main(){
    
    cout << "Ingrese la cantidad de clientes: ";
    cin >> clients;

    for(int i = 1; i <= clients; i++){
        cout << "\nCliente #" << i << endl;
        cout << "Ingrese el total de la compra: ";
        cin >> totalClient;

        if(totalClient < 100){
            cout << "No tiene descuento. Total: " << totalClient << " Bs." << endl;
            total = total + totalClient;
        }
        else{
            if(totalClient >=100 && totalClient <= 500){
                cout << "Descuento de 5%. Total: " << totalClient * 0.95 << " Bs." << endl;
                total = total + totalClient * 0.95; // Suma al total la compra del cliente con el descuento
            }
            else{
                cout << "Descuento de 8%. Total: " << totalClient * 0.92 << " Bs." << endl;
                total = total + totalClient * 0.92;
            }
        }
    }
    cout << "\nEl total de ventas efectuadas es de: " << total << "Bs." << endl;
    return 0;
}