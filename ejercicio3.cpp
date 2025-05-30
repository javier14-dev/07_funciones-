#include <iostream>
using namespace std;
int funcionSerie(int cantidad) {
    int a = 0, b = 1, suma = 0;
    cout << "Serie de Fibonacci: ";

    for (int i = 0; i < cantidad; i++) {
        cout << a << " ";
        suma += a;
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;
    return suma;
}
int main() {
    int n;
    cout << "Ingrese la cantidad de terminos : ";
    cin >> n;
    int sumaTotal = funcionSerie(n);
    cout << "La suma de los terminos es: " << sumaTotal << endl;

    return 0;
}
