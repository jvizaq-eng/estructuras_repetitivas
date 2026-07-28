#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0;
    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numero;
    while (numero != 0) {
        contador++;
        cout << "Ingrese otro numero (0 para terminar): ";
        cin >> numero;
    }
    cout << "Ha ingresado " << contador << " numeros." << endl;
    return 0;
}