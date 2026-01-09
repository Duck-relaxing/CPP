#include <iostream>

using namespace std;

int main()
{
    string palabra;
    cout << "Dime una palabra:" << endl;
    cin >> palabra;
    cout << "Has escrito la palabra: " << palabra << endl;
    for (int i = 0; i < palabra.size(); i = i + 1) {
        char letra = palabra[i];
        cout << letra << endl;
    }
}