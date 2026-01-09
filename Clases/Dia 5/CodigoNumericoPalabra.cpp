#include <iostream>

using namespace std;

int main()
{ 
    string palabra;
    palabra = "rinoceronte";
    int num_letras = palabra.size();
    cout << "La palabra \"" << palabra << "\" tiene " << num_letras << " letras" << endl;
    for (int posicion = 0; posicion < num_letras; posicion = posicion + 1) {
        char letra = palabra[posicion];
        int codigo_numerico = letra;
        cout << "La letra " << letra << " tiene el código numérico " << codigo_numerico << endl;
    }
}