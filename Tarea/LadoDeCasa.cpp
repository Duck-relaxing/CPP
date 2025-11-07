#include<iostream>
using namespace std;

int main()
{  
    // Pedir número de casa
    int Number;
    cout << "Numero de vivienda:" << endl;
    cin >> Number;
    //comprobación y respuesta
    if (Number % 2 == 0){ 
    cout << "Derecha" << endl;
    } else{
    cout << "Izquierda" << endl;
    }
}
