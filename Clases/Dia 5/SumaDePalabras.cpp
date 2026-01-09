#include <iostream>

using namespace std;

int main()
{ 
    string palabra;
    cout << "Escribe una palabra: " << endl;
    cin >> palabra;
    
    cout << "Escribe otra palabra: " << endl;
    string palabra2;
    cin >> palabra2;
    
    string frase = palabra + " " + palabra2;
    cout << "Frase: " << frase;
}