#include <iostream>
using namespace std;

int main() {
    int men, women, sum, max = 0, best;
    cin >> men >> women;
    for (int i = 0; i < 9; i++) {
        sum = 0;
        for(int j = 0; j < men; j++) {
            sum += women % 10;
            women /= 10;
        }
        if (sum >= max) {
            max = sum;
            best = i + 1;
        }
    }
    cout << best << " " << max;
}
