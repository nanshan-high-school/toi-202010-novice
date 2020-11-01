#include <iostream>
using namespace std;

int main() {
    int cost;
    cin >> cost;
    if (cost - (cost / 2000) * 200 <= cost - (cost / 1000) * 100) {
        cout << cost - (cost / 2000) * 200 << " 0";
    } else {
        cout << cost - (cost / 1000) * 100 << " 1";
    }
}
