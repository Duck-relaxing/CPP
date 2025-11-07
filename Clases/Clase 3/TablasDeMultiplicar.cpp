#include <iostream>

using namespace std;

// while (condicion) {
//      bloque de codigo
// }

int main() {
    // mostrar la tabla de un numero
    int num;
    cout << "¿Que tabla quieres que te muestre?" << endl;
    cin >> num;
    // repetimos desde el 0 hasta el 10
    int i = 0;
    while (i <= 10) {
        int r = i*num;
        cout << num << "*" << i << " = " << r << endl;
        
        i = i + 1;
    }
}

