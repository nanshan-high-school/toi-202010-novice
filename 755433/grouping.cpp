#include <iostream>
using namespace std;

int main() {
    int N = 0, P = 0, i = 0, powerSum = 0, max = -1, maxTeam;
    cin >> N >> P;

    while (i < 9) {
        for (int j = 0; j < N; j++) {
            powerSum += P % 10;
            P /= 10;
        }
        if (powerSum >= max) {
            max = powerSum;
            maxTeam = i + 1;
        }
        powerSum = 0;
        i++;
    }

    cout << maxTeam << " " << max;
}
