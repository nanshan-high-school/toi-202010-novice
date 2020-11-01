#include <iostream>
using namespace std;

int main() {
    int s;
    int e;
    int a;
    int day = 1;
    cin >> s >> e >> a;

    while (true) {
        if (e <= s) {
            cout << day;
            break;
        }

        day += 1;

        if (a == 0) {
            cout << "unsalable";
            break;
        } else if ((day - 1) % 10 % 9 == 0) {
            day += 2;
            a -= 1;
        } else if ((day - 1) % 3 == 0) {
            s += (s / 3);
        } else {
            s += (s / 10);
        }
    }
}
