#include <iostream>

using namespace std;

int main()
{ 
    string palabra;
    cout << "Escribe una palabra: " << endl;
    cin >> palabra;
    cout << "Alrevés es: ";
    /*
    for (int posicion = 0; posicion < palabra.size(); posicion = posicion + 1) {
        cout << palabra[palabra.size() - 1 - posicion];
    }
    */
    for (int posicion = palabra.size() - 1; posicion >= 0; posicion = posicion - 1) {
        cout << palabra[posicion];
    }
}