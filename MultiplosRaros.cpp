

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
    int numberTry;
    cin >> numberTry;
    int trueNumber;
    trueNumber = numberTry*(numberTry+1)/2;
    cout << "Esto en un debug: " << trueNumber << endl;
    
    if(trueNumber%3 == 0){
        cout << "SI" << endl;
    }else{
        cout << "NO" << endl;
    }

}
