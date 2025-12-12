#include <iostream>

using namespace std;

int main()
{
    char letra;
    cin >> letra;

    if (letra < 'a') {
        cout << "Es mayúscula" << endl;
    } else {
        cout << "Es minúscula" << endl;
    }
}