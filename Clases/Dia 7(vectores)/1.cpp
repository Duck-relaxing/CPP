#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> edades(10);
    
    for (int i = 0; i < edades.size(); i++) {
        cout << "Dime el número que quieres en la posición " << i << ": ";
        cin >> edades[i];
    }
    
    for (int i = 0; i < edades.size(); i++) {
        cout << "El número en la posición " << i << " es: ";
        cout << edades[i];
    }
}
