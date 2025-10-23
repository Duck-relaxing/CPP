

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

int main()
{
    int dividendo;
    int divisor;
    
    int cociente;
    int resto;
    
    cin >> dividendo >> divisor;
    
    cociente = dividendo/divisor;
    resto = dividendo % divisor;
    
    
    cout << cociente << "  " << resto << endl;
    
    
}
