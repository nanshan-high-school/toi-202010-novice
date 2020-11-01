#include <iostream>
using namespace std;

int main() {
    int members, list, sum, max = 0, best;
    cin >> members >> list;
    for (int i = 0; i < 9; i++) {
        sum = 0;
        for(int j = 0; j < members; j++) {
            sum += list % 10;
            list /= 10;
        }
        if (sum >= max) {
            max = sum;
            best = i + 1;
        }
    }
    cout << best << " " << max;
}
