#include <iostream>
using namespace std;
int main() {
    int N;

    cout << "Ingrese un numero: ";cin >> N;

    if (N % 2 == 0) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }

    return 0;
}

