#include <iostream>

using namespace std;

int main()
{

    cout << "Usuario: ";
    string user;
    cin >> user;
    
    cout << "Contraseña: ";
    string pass;
    cin >> pass;
    
    if (user == "Lolpatp" and pass == "Montesclaros88") {
        cout << "Logged in!" << endl;
        cout << "¿Cuántas cartas quieres?" << endl;
        int num_cartas;
        cin >> num_cartas;
        
        if (num_cartas > 20) {
            cout << "Número inválido. Has perdido.";
        }
        if (num_cartas % 5 == 0) {
            num_cartas = num_cartas + 1;
            cout << "Te voy a dar " << num_cartas  << " cartas" << endl;
        }
        if (num_cartas % 2 == 0) {
            cout << "Pierdes el turno" << endl;
        }
        
        if (num_cartas == 0) {
            cout << "Te veo muy seguro/a...";
        } else {
            cout << "Buena cantidad";
        }
        
    } else {
        cout << "¡Acceso denegado!" << endl;

        cout << "Usuario: ";
        string user;
        cin >> user;
        
        cout << "Contraseña: ";
        string pass;
        cin >> pass;
        
        if (user == "jvilella" and pass == "megustaprogramar") {
            cout << "¡Ahora sí! Pero ya es demasiado tarde...";
        }
    }
    
    
}