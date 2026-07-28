#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0;
    cout << "=== CONTADOR DE NUMEROS CON BUCLE WHILE ===" << endl;
    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numero;
    while (numero != 0) {
        contador++;
        cout << "Ingrese otro numero (0 para terminar): ";
        cin >> numero;
    }
    cout << "===========================================" << endl;
    cout << "Ha ingresado un total de " << contador << " numeros." << endl;
    return 0;
}