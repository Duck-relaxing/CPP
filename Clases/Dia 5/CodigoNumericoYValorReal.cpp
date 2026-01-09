#include <iostream>

using namespace std;

int main()
{
    cout << "Pon una número: ";
    char char_numero;
    cin >> char_numero;

    int codigo_numerico = char_numero;
    int valor_real = char_numero - '0';
    cout << "Código numérico: " << codigo_numerico << endl;
    cout << "Valor real: " << valor_real;

}