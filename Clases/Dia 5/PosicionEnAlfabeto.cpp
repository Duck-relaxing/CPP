#include <iostream>

using namespace std;

int main()
{
 
    cout << "Dime una letra: ";
    char letra;
    cin >> letra;
    
    char letra_de_referencia;
    if (letra < 'a') {
        letra_de_referencia = 'A';
    } else {
        letra_de_referencia = 'a';
    }
    
    cout << "La letra " << letra_de_referencia << " está en la posición ";
    cout << letra - letra_de_referencia + 1 << " del alfabeto." << endl;
}