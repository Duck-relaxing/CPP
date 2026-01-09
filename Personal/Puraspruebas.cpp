#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Ancho total de la W
    int ancho = 4 * n - 1;
    
    for (int i = 0; i < n; i++) {
        string linea(ancho, ' ');
        
        // Asterisco izquierdo (baja desde la izquierda)
        linea[i] = '*';
        
        // Asterisco central izquierdo (baja desde arriba hacia la izquierda)
        linea[2 * n - 1 - i] = '*';
        
        // Asterisco central derecho (baja desde arriba hacia la derecha)
        linea[2 * n - 1 + i] = '*';
        
        // Asterisco derecho (baja desde la derecha)
        linea[ancho - 1 - i] = '*';
        
        // Eliminar espacios finales
        size_t ultimo = linea.find_last_not_of(' ');
        if (ultimo != string::npos) {
            linea = linea.substr(0, ultimo + 1);
        }
        
        cout << linea << endl;
    }
    
    return 0;
}