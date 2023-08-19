// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 17/08/2023

// Fecha modificación: 18/08/2023

// Número de ejericio: 5

// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y
// raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )

#include <iostream>
#include  <cmath>

using namespace std;
double XI, Y1, X2, Y2, dis1, dis2, dis;

int main() {

    cout << "Ingrese las coordenadas del primer punto: ";
    cin >> XI;
    cin >> Y1;

    cout << "Ingrese las coordenadas del segundo punto: ";
    cin >> X2;
    cin >> Y2;

    // Calcula la distancia entre los puntos
    dis1 = pow(X2 - XI,2);
    dis2 = pow(Y2 - Y1,2);
    dis = pow(dis1 + dis2, 1/2);

    cout << "La distancia entre los puntos es: " << dis << endl;
    return 0 ;
}
