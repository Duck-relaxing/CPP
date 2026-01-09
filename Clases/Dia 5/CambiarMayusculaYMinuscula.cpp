#include <iostream>

using namespace std;

int main()
{
    cout << "Pon una letra: ";
    char letra;
    cin >> letra;

    int posicion;
    if (letra < 'a') {
        // mayuscula
        posicion = letra - 'A';
    } else {
        // minuscula
        posicion = letra - 'a';
    }
    
    char letra_resultante;
    if (letra < 'a') {
        // era mayuscula
        letra_resultante = posicion + 'a';
    } else {
        // era minuscula
        letra_resultante = posicion + 'A';
    }
    
    cout << "Ahora es: " << letra_resultante;
}