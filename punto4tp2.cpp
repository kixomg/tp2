//2.iv)
#include <iostream>
using namespace std;
int main() {
    float nota1, nota2, nota3, promedio;

    cout << "Ingrese la primera nota: ";cin >> nota1;
    cout << "Ingrese la segunda nota: ";cin >> nota2;
    cout << "Ingrese la tercera nota: ";cin >> nota3;

    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio >= 7) {
        cout << "TEA" << endl;
    } else if (promedio >= 4) {
        cout << "TEP" << endl;
    } else {
        cout << "TED" << endl;
    }

    return 0;
}

