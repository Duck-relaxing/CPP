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
    // Programa calcula el factorial
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    int mcd = n1;
    while (n1 % mcd != 0 || n2 % mcd != 0) {
        mcd=mcd-1; // i--;
    }
    int mcm = (n1*n2)/mcd;
    cout << mcd << endl;
    cout << mcm << endl;
}
