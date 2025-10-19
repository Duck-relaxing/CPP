#include<iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    
    if(year % 100 == 0){
     if(year % 400 == 0){
     cout << "29 días" << endl;
     }else{
     cout << "28 días" << endl;
     }
    }else{
     if (year % 4 ==0) {
      cout << "29 días" << endl;
     }
     else{ 
      cout << "28 días" << endl;
      }
    
    }
}