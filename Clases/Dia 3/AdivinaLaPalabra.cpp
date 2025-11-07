#include <iostream>
using namespace std;
int main(){
    int num = 0;
    int num_max = 3;
    string word;

    string secretWord =  "SeCrEtA"; //Tu palabra  //Your word

    cout << "Adivina la palabra secreta"<<endl;
    cin >> word;

    while (word != secretWord && num < num_max)
    {
        cout << "Palabra incorrecta!" << endl;
        if (num_max - num != 1)
        {
              cout << "Te quedan " << num_max - num << " intentos" << endl;
        }else{
            cout << "Te queda 1 intento" << endl;
        }
        
        cin >> word;
        num++;

    }
    if (word == secretWord)
    {
        cout << "¡¡Correcto!!" << endl; 
    }else{
        cout << "Palabra incorrecta!" << endl;
        cout << "Has agotado los intentos";
    }
    

}