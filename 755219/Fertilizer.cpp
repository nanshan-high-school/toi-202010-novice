#include <iostream>
using namespace std;

int main() {
    int x, y, patient, day = 1;
    cin >> x >> y >> patient;
    while (x < y) {
        x = x + x / 10;
        day++;
        x = x + x / 10;
        day++;
        x = x + x / 3;
        day++;
    }
    if (day > patient) {
        cout << "unsalable";
    } else {
        cout << day;
    }
}
