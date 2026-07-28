// ============================================
// Practica de Laboratorio: Estructuras Repetitivas
// Ejercicio 1: Contador con bucle while
// ============================================

#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0;
    cout << "=== CONTADOR DE NUMEROS CON BUCLE WHILE ===" << endl;
    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numero;

    // Bucle while que se repite mientras el numero sea distinto de 0
    while (numero != 0) {
        contador++; // Incremente el contador por cada numero valido
        cout << "Ingrese otro numero (0 para terminar): ";
        cin >> numero;
    }

    cout << "===========================================" << endl;
    // Muestra el resultado final evaluando el valor de contador
    if (contador == 0) {
        cout << "No ingresaste ningun numero valido antes del 0." << endl;
    } else {
        cout << "Ha ingresado un total de " << contador << " numeros." << endl;
    }
    return 0;
}