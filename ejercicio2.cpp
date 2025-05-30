#include <iostream>
using namespace std;
void funcionDivision(int num1, int num2, int &cociente, int &resto){

    int mayor = (num1 > num2) ? num1 : num2;
    int menor = (num1 < num2) ? num1 : num2;

    cociente = 0;
    while (mayor >= menor) {
        mayor -= menor;
        cociente++;
    }
    resto = mayor;
}
int main(){
    int num1, num2;
    int cociente, resto;
    cin>>num1>>num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Ambos numeros deben ser enteros positivos. " << endl;
        return 1;
    }

    funcionDivision(num1, num2, cociente, resto);

    cout << "El cociente es: " << cociente << endl;
    cout << "El resto es: " << resto << endl;

    return 0;
}
