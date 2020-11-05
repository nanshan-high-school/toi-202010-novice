#include <iostream>
using namespace std;

int main() {
    int money, num1, num2;
    cin >> money;
    num1 = money / 1000 * 100;
    num2 = money / 2000 * 200;
    if (money - num1 < money - num2) {
        cout << money - num1 << " 1";
    } else {
        cout << money - num2 << " 0";
    }
}
