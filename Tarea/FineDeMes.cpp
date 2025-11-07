#include<iostream>
using namespace std;

int main()
{  
    // Pedir número de casa
    int bank;
    int usedMoney;
    int money;
    cin >> bank >> usedMoney;
    money = bank + usedMoney;
    if (money >= 0){
    cout << "SI" << endl;
    }else{
    cout << "NO" << endl;
    }
    
}