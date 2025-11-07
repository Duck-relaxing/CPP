#include<iostream>
using namespace std;

int main()
{
    string character;
    string relationship;
    cin >> character >> relationship;
    if(character == "Luke" and relationship =="padre") {
     cout << "TOP SECRET" << endl;    
    }else{
    cout << character << " yo soy tu " << relationship;
    }
}