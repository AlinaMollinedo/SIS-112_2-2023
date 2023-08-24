// Materia: Programación I, Paralelo 4

// Autor: Alina Mollinedo Dávila

// Fecha creación: 23/08/2023

// Fecha modificación: 23/08/2023

// Número de ejericio: 64

// Problema planteado: Escribir un progama que acepte un número no mayor a dos dígitos y muestre el mismo
// de manera literal:
// Ej: 23 : Veintitrés

#include <iostream>
#include <string>

using namespace std;
int n, un, dc;
string nlit, dcs[] = {"veinti", "treinta y ", "cuarenta y ", "cincuenta y ", "sesenta y ", "setenta y ", "ochenta y ", "noventa y "},
uns[] = {"uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"},
nteen[] = {"once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};

int main(){
    cout << "Ingrese un numero: ";
    cin >> n;

    dc = n / 10; // Calcula las decenas del numero
    un = n % 10; // Calcula las unidades del numero

    if(un != 0 && dc != 1){ // Determina si el numero termina en 0 o empieza con 1
        for(int i = 0; i < 8; i++){
            if(i == dc - 2){
                nlit = nlit + dcs[i]; // Añade las decenas correspondientes
            }
        }
        for(int i = 0; i < 9; i++){
            if(i == un - 1){
                nlit = nlit + uns[i]; // Añade las unidades correspondientes
            }
        }
    }
    else{
        if(un == 0){ // Determina si el numero acaba en cero
            switch(dc){
                case 0: nlit = nlit + "cero";
                break;
                case 1: nlit = nlit + "diez";
                break;
                case 2: nlit = nlit + "veinte";
                break;
                default: 
                for(int i = 1; i < 9; i++){
                    if(i == dc - 2){
                        string dc0; 
                        dc0 = dcs[i];
                        dc0.erase(dc0.size() - 2); // Elimina los dos ultimos caracteres de la cadena
                        nlit = nlit + dc0;
                    }
                }
            }
        }
        else{ // Para números cuyas decenas son 1
            for(int i = 0; i < 9; i++){
                if(i == un - 1){
                    nlit = nlit + nteen[i];
                }
            }
        }
    }
    nlit[0] = toupper(nlit[0]); // Convierte el primer caracter de la cadena en mayúscula
    cout << nlit << endl;
    return 0;
}