#include <iostream>
using namespace std;

int main() {
    int n;
    int p;
    int team = 1;
    int max_team;
    int max_num = 0;
    int num;
    cin >> n >> p;

    while (p != 0) {
        num = 0;
        for (int i = 0; i < n; i++) {
            num += p % 10;
            p /= 10;
            if (max_num <= num) {
                max_num = num;
                max_team = team;
            }
        }
        team += 1;
    }
    cout << max_team << " " << max_num;
}
