#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int T, C = 0;

    cin >> num;

    T = num - (num / 2000) * 200;
    C = num - (num / 1000) * 100;
    
    if(T > C) {
        cout << C << " " << "1";
    } else {
        cout << T << " " << "0"; 
    }
}
