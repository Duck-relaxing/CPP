#include <iostream>

using namespace std;

// if (condicion) {
//      bloque de codigo    
// }

// while (condicion) {
//      bloque de codigo
// }

// for (inicialización; condicion; avance) {
//      bloque de codigo
// }
// inicialización --> la primera vez y solo la primera vez
// condicion --> la primera vez y al terminar el bloque
// avance --> al terminar el bloque y antes de mirar la condicion
int main() {
    // programa para mostrar los divisores de n
    int n;
    cin >> n; // pedirle un numero
    
    int i;
    // Iteramos desde 1 hasta n incluido
    for (i = 1; i <= n; i++) {
        // mirar si el valor i es divisor de n
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}

