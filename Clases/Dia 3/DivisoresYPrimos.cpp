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

    int divisor = 2;
    while (n > 1) {
        if (n % divisor == 0) {
            // Es divisor lo muestro y divido n por el divisor
            cout << divisor << endl;
            n = n / divisor;
        } else {
            // paso al siguiente
            divisor = divisor + 1;
        }
    }
}
// 100
// 2 
// 50 muestro el 2
// 25 muestro el 2
// 2 NO
// 3 NO
// 4 NO
// 5 
// 5 muestro el 5
// 1 muestro el 5

