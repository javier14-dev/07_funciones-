#include <iostream>
using namespace std;
bool funcionPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
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
    return 0;
}
