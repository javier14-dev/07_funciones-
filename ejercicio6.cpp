#include <iostream>
using namespace std;
void mostrarDivisores(int n) {
    cout << "Divisores propios de " << n << ": ";
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
bool esPerfecto(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma == n;
}
int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "El numero debe ser positivo." << endl;
        return 1;
    }
    mostrarDivisores(numero); 

    if (esPerfecto(numero)) {
        cout << numero << "Es un numero perfecto." << endl;
    } else {
        cout << numero << "No es un numero perfecto." << endl;
    }
    return 0;
}
