// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 20/08/2023

// Fecha modificación: 24/08/2023

// Número de ejericio: 47

// // Problema planteado: Un negocio de “Cosméticos” de belleza, contratara a N vendedoras para la venta de sus
// productos. Cada Vendedora en promedio debe vender 10 productos en un mes.
// La cancelación de los sueldos a las vendedoras se realiza cada fin de mes, bajo las
// siguientes características
// Una vendedora recibe un sueldo básico de acuerdo a su antigüedad (ver tabla) y
// además se añade un sueldo extra por comisión de ventas del 10% del total vendido.
// Años Porcentaje
// 2 a 4 5%
// 5 a 7 11%
// 8 a 10 18%
// 11 a 14 26%
// 15 a 19 34%
// 20 a 24 42%
// 25 o mas 50%
// La propietaria del negocio desea conocer cuánto de sueldo debe cancelar a cada una
// de sus vendedoras y cuanto de comisión recibirá como extra. Diseñar un algoritmo
// para este problema.

#include <iostream>

using namespace std;
int n, baseSal, quantity, price, antig;
double total;

int main(){

    cout << "Ingrese el sueldo basico: ";
    cin >> baseSal;
    cout << "Ingrese el precio unitario por producto: ";
    cin >> price;

    cout << "\nIngrese el numero de vendedoras: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        double salary = 0, comm = 0;

        cout << "\n Vendedora #" << i << endl;

        cout << "Ingrese su antiguedad: ";
        cin >> antig;
        cout << "Ingrese la cantidad de productos vendidos: ";
        cin >> quantity;

        // Añade el porcentaje extra según la antiguedad de la vendedora
        if(antig >= 2 && antig <= 4){
            salary = baseSal + baseSal * 0.5;
        }
        else{
            if(antig >= 5 && antig <= 7){
                salary = baseSal + baseSal * 0.11;
            }
            else{
                if(antig >= 8 && antig <= 10){
                    salary = baseSal + baseSal * 0.18;
                }
                else{
                    if(antig >= 11 && antig <= 14){
                        salary = baseSal + baseSal * 0.26;
                    }
                    else{
                        if(antig >= 15 && antig <= 19){
                            salary = baseSal + baseSal * 0.34;
                        }
                        else{
                            if(antig >= 20 && antig <= 24){
                                salary = baseSal + baseSal * 0.42;
                            }
                            else{
                                if(antig >= 25){
                                    salary = baseSal + baseSal * 0.50;
                                }
                            }
                        }
                    }
                }
            } 
        }
        comm = price * quantity * 0.1; // Calcula las comisiones
        total = total + comm + salary; // Calcula el total
        cout << "\nDebe pagarle " << comm + salary << " Bs. en total." << endl;
        cout << "Recibira " << comm << "Bs. en comisiones." << endl;
    }
    cout << "\n\nTotal: " << total << " Bs." << endl;
    return 0;
}