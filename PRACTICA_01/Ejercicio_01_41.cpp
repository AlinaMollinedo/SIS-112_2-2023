// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 19/08/2023

// Fecha modificación: 19/08/2023

// Número de ejericio: 41

// Problema planteado: Un cierto número de obreros de una empresa reciben pagos semanales de dinero, en
// función a las horas trabajadas y una tarifa hora. Se sabe que cuando las horas que
// trabaja un obrero exceden de 40, el resto se convierte en horas extras que se pagan al
// doble de una hora normal, considere además un descuento del 5% a todos los obreros
// para pagar su prima de seguro. Por lo tanto determine: el pago total y el pago neto por
// cada obrero y también el pago general a todos los obreros y cuanto se retendrá por la
// prima de manera general.


#include <iostream>

using namespace std;
double x, workHours, hourlyRate, total, workerDis, retained;

int main(){

    cout << "Ingrese el numero de obreros: ";
    cin >> x;

    for(int i = 1; i <= x; i++){
        cout << "\nObrero #" << i << endl;
        cout << "Ingrese las horas trabajadas: ";
        cin >> workHours;
        cout << "Ingrese la tarifa por hora ";
        cin >> hourlyRate;

        // Calcula el pago de cada obrero
        double totalWorker = 0;
        if(workHours > 40){
            totalWorker = 40 * hourlyRate + (workHours - 40) * hourlyRate * 2;
        }
        else{
            totalWorker = workHours * hourlyRate;
        }
        retained = retained + totalWorker * 0.05; // 5% para la prima del seguro
        workerDis = totalWorker * 0.95; // Pago descontado del obrero
        total = total + workerDis; // Suma de los pagos descontados

        cout << "Pago neto del obrero: " << totalWorker << " Bs," << endl;
        cout << "Pago del obrero: " << workerDis << " Bs," << endl;
    }
    cout << "\n\nPago total: " << total << " Bs," << endl;
    cout << "Pago retenido: " << retained << " Bs," << endl;
    return 0;    
}