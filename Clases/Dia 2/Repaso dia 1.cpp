#include <iostream>

using namespace std;

int main()
{

    // Pide el nombre al usuario
    cout << "¿Cómo te llamas?";
    string nombre;
    cin >> nombre;
    cout << "¡Hola " << nombre << "!" << endl;
    
    /*
    Ahora pídele su edad
    Y súmale 10 para chinchar
    */
    cout << "¿Cuántos años tienes?";
    int edad;
    cin >> edad;
    cout << "Tienes " << edad + 10 << " años.";
}