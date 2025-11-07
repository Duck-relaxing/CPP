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
    int i;
    for (i = 0; i < 10; i++) {
        // bloque de codigo
        cout << i << endl;
    }
    // son lo mismo
    // i = i + 1;
    // i += 1;
    // i++; 
    // ++i;
    
    /*
    // Codigo equivalente al bucle for
    int i = 0; // inicialización
    while (i < 10) {
        // bloque de codigo
        cout << i << endl;
        
        // avance
        i = i + 1;
    }
    */
}

