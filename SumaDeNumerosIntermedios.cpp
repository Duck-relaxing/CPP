#include <iostream>

using namespace std;

// while (condicion) {
//      bloque de codigo
// }
// i = 1..n (n*(n+1))/2;
// i --> 11
// suma --> 55
int main() {
    int n;
    cin >> n;
    int i = 1;
    int suma = 0;
    while (i <= n) {
        suma = suma + i;
        i = i + 1;
    }
    cout << "La suma desde 1 hasta " << n << " es " << suma << endl;
}

