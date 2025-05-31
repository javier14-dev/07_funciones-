#include <iostream>
using namespace std;
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int mcm(int a, int b) {
    return (a / mcd(a, b)) * b;
}

int main() {
	int num1,num2;
    cout << "Ingresa el primer numero : ";
    cin >> num1;
    cout << "Ingresa el segundo numero : ";
    cin >> num2;

    cout << "MCD: " << mcd(num1, num2) << endl;
    cout << "MCM: " << mcm(num1, num2) << endl;

    return 0;
}
