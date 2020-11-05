#include <iostream>
using namespace std;

int main() {
    int s, e, a, days = 0, date = 1;
    cin >> s;
    cin >> e;
    cin >> a;

    while (s != e) {
        if ((date % 10 == 9) || (date % 10 == 0)) {
            s = s;
        } else {
            if (date % 3 != 0) {
                s += s / 10;
            } else if (date % 3 == 0) {
                s += s / 3;
            }
        }
        if (date % 10 == 1 && date != 1) {
            a--;
        }
        date++;
    }
    
    if (a <= 0) {
        cout << "unsalable";
    } else {
        cout << date;
    }
}
