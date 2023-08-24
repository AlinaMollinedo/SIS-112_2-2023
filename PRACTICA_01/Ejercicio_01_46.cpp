// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 20/08/2023

// Fecha modificación: 21/08/2023

// Número de ejericio: 46

// Problema planteado: . La empresa “Limbo S.A.”, empresa de seguros tiene contratados a N vendedores. Cada
// uno hace tres ventas a la semana. Su política de pagos es que un vendedor recibe un
// sueldo base, y un 10% extra por comisiones de sus ventas. El gerente de su compañía
// desea saber cuánto dinero obtendrá en la semana cada vendedor por concepto de
// comisiones por las tres ventas realizadas, y cuanto tomando en cuenta su sueldo base y
// sus comisiones


#include <iostream>

using namespace std;
int n, baseSal, total, totalComm;

int main(){

    cout << "Ingrese el numero de vendedores: ";
    cin >> n;

    for(int i = 1; i <=n ; i++){
        cout << "\nVendedor #" << i << endl;
        cout << "Ingrese su sueldo base: ";
        cin >> baseSal;

        total = baseSal + baseSal * 0.1; // Calcula el salario con el porcentaje de comisiones
        totalComm = baseSal * 0.1;

        cout << "El vendedor recibira " << totalComm << " Bs. en comisiones." << endl;
        cout << "El vendedor recibira " << total << " Bs. en total." << endl;
    }
    return 0;
}
