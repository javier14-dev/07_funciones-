#include <iostream>
using namespace std;
bool funcionPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
void mostrarPrimosHasta(int n) {
    cout << "Numeros primos menores o iguales a " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (funcionPrimo(numero)) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " NO es un numero primo." << endl;
    }
    mostrarPrimosHasta(numero);
    return 0;
}

