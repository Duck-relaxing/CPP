#include <iostream>

using namespace std;

int main()
{ 
    string palabra;
    cout << "Escribe una palabra: " << endl;
    cin >> palabra;
    
    string palabra_en_plural = palabra + 's';
    cout << "Palabra en plural: " << palabra_en_plural;
    
    cout << "Escribe otra palabra: " << endl;
    cin >> palabra;
    
    palabra_en_plural = palabra + "es";
    cout << "Palabra en plural: " << palabra_en_plural;
}