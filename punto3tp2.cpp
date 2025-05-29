//2.iii)
#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "Ingrese el primer numero: ";cin >> A;
    cout << "Ingrese el segundo numero: "; cin >> B;
    cout << "Ingrese el tercer numero: ";cin >> C;

    if (A == B || A == C || B == C) {
        cout << "Error: Los numeros deben ser distintos" << endl;
    } else {
        if (A > B && A > C) {
            cout << "El mayor es: " << A << endl;
        } else if (B > A && B > C) {
            cout << "El mayor es: " << B << endl;
        } else {
            cout << "El mayor es: " << C << endl;
        }

        if (A < B && A < C) {
            cout << "El menor es: " << A << endl;
        } else if (B < A && B < C) {
            cout << "El menor es: " << B << endl;
        } else {
            cout << "El menor es: " << C << endl;
        }
    }

    return 0;
}

