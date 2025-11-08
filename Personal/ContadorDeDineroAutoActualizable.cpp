#include <iostream>

using namespace std;
int main(){

    float cash = 0;
    float transfer;
    while (true)
    {

        system("cls");
        cout << "Tienes " << cash << "€ en tu cuenta\n¿Qué movimiento de dinero has hecho? ";
        cin >> transfer;
        cash = cash + transfer;
        system("cls");
    }
    
    

}