#include <iostream>

using namespace std;

int main()
{
 
    cout << "¿Qué número de letra del alfabeto quieres? ";   
    int incremento;
    cin >> incremento;
    char letra_de_referencia = 'A';
    
    char letra = letra_de_referencia + incremento - 1;
    cout << "La letra es: " << letra << endl;
}