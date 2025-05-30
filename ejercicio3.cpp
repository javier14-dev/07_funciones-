#include <iostream>
using namespace std;
int funcionSerie(int cantidad, int serie[]) {
    int a = 0, b = 1, suma = 0;

    for (int i = 0; i < cantidad; i++) {
        serie[i] = a;
        suma += a;
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    return suma;
}
int contarPares(int serie[], int cantidad) {
    int contador = 0;
    for (int i = 0; i < cantidad; i++) {
        if (serie[i] % 2 == 0) {
            contador++;
        }
    }
    return contador;
}
int main() {
    int n;
    cout << "Ingrese la cantidad de terminos : ";
    cin >> n;
    int serie[1000];
    int sumaTotal = funcionSerie(n, serie);
    cout << "Serie de Fibonacci: ";
    
    for (int i = 0; i < n; i++) {
        cout << serie[i] << " ";
    }
    cout << endl;
    cout << "La suma de los terminos es: " << sumaTotal << endl;
    int cantidadPares = contarPares(serie, n);
    cout << "Cantidad de terminos pares en la serie: " << cantidadPares << endl;
    return 0;
}
