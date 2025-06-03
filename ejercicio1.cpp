#include <iostream>
using namespace std;
int suma(int a, int b) {
    return a + b;
}
int resta(int a, int b) {
    return a - b;
}
float division(int a, int b) {
    if (b == 0) {
        cout << "Error: division entre cero no permitida." << endl;
        return 0.0;
    }
    return static_cast<float>(a) / b;
}
int main() {
    int num1, num2;

    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    int resultadoSuma = suma(num1, num2);
    int resultadoResta = resta(num1, num2);
    float resultadoDivision = division(num1, num2);

    cout << "Resultado de la suma: " << resultadoSuma << endl;
    cout << "Resultado de la resta: " << resultadoResta << endl;

    if (num2 != 0) {
        cout << "Resultado de la division: " << resultadoDivision << endl;
    }
    return 0;
}
