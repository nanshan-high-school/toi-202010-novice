#include <iostream>
using namespace std;

int main() {
    int date = 1, h, e, p;
    cin >> h >> e >> p;
    while (h < e && p != 0) {
        if (date % 11 == 0 && date > 10) {
            p--; 
        } else if (date % 3 != 0 && date % 11 < 9) {
            h += h / 10;
        } else if (date % 3 == 0 && date % 11 < 9) {
            h += h / 3;
        }
        date++;
    }
    if (p == 0) {
        cout << "unsalable";
    } else {
    cout << date;
    }
}
