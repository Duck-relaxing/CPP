#include <iostream>
using namespace std;
int main(){
    //ints
    int insectos;
    int aracnidos;
    int crustaceos;
    int escalopendras;
    int anillosEscalopendras;

    // obtener input
    cin >> insectos >> aracnidos >> crustaceos >> escalopendras >> anillosEscalopendras;

    //operaciones
    insectos = insectos*6;
    aracnidos = aracnidos*8;
    crustaceos = crustaceos*10;
    escalopendras = anillosEscalopendras*escalopendras*2;

    int resultado = insectos+aracnidos+crustaceos+escalopendras;

    // obtener output
    cout << resultado;

}