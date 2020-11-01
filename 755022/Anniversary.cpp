#include <iostream>
using namespace std;
int main() {
    int price;
    cin >> price;
    int num1 = price - (200 * (price / 2000)), num2 = price - (100 * (price / 1000));

    if(num1 > num2 ) {
        cout << num2 << " 1";
    }

    if(num2 > num1) {
        cout << num1 << " 0";
    }
    
    if(num1 == num2) {
        cout << num1 << " 0";
    }
}
