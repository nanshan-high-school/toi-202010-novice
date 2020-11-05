#include <iostream>
using namespace std;

int main() {
    int people, power, total = 0, num, max = 0, best;
    cin >> people >> power;
    for (int x = 1; x <= 9; x++) {
        total = 0;
        for (int i = people; i > 0; i--) {
            num = power % 10;
            power /= 10;
            total += num;
        }
        if (total > max) {
            max = total;
            best = x;
        }
    }
    cout << best << " " << max;
}
