#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> acordes(10);
    
    for (int i = 0; i < acordes.size(); i++) {
        cin >> acordes[i];
    }
    cout << endl;
    
    int i = 0;
    while (i < acordes.size()) {
        cout << acordes[i] << " ";
        i++;
    }
    cout << endl;
    
    i = 0;
    while (i < acordes.size()) {
        cout << acordes[acordes.size() - 1 - i] << " ";
        i++;
    }
}
