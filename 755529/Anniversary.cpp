#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money ;
    int dep_1;
    int dep_2;
    dep_1 = money - (money / 1000) * 100;
    dep_2 = money - (money / 2000) * 200;
    if (dep_2 < dep_1) {
        cout << dep_2 << " " << 1;
    } else {
        cout << dep_1 << " " << 0;
    }
}
