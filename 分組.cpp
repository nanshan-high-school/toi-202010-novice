#include <iostream>
using namespace std;
int main() {
    int N = 0, P = 0, max = -1, max_team = 0, group = 0;
    cin >> N;
    cin >> P;
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < N; j++) {
            group += P % 10;
            P /= 10;
        }
        if (group >= max) {
            max = group;
            max_team = i + 1;
        }
        group = 0;
    }
    cout << max_team << " " << max;
}
