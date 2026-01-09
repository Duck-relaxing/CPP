#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> notas(5);
    
    // Entrada de datos
    for (int i = 0; i < notas.size(); i++) {
        cin >> notas[i];
    }
    
    // Salida de datos
    for (int i = 0; i < notas.size(); i++) {
        cout << notas[i] << endl;
    }
}
