#include <iostream>
using namespace std;

int main() {
    int date = 1, a, b, c;
    cin >> a >> b >> c;
    while (a < b && c != 0) {
        if (date % 11 == 0 && date > 10) {
            c--; 
        } else if (date % 3 != 0 && date % 11 < 9) {
            a += a / 10;
        } else if (date % 3 == 0 && date % 11 < 9) {
            a += a / 3;
        }
        date++;
    }
    if (c == 0) {
        cout << "unsalable";
    } else {
    cout << date;
    }
}
