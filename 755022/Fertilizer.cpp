#include <iostream>
using namespace std;

int main() {
    int date = 1, S, E, P;
    cin >> S >> E >> P;
    while (S < E && P != 0) {
        if (date % 11 == 0 && date > 10) {
            P--; 
        } else if (date % 3 != 0 && date % 11 < 9) {
            S += S / 10;
        } else if (date % 3 == 0 && date % 11 < 9) {
            S += S / 3;
        }
        date++;
    }
    if (P == 0) {
        cout << "unsalable";
    } else {
    cout << date;
    }
}
