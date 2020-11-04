#include <iostream>
using namespace std;
int main() {
    int S = 0, E = 0, A = 0, day = 1;
    cin >> S >> E >> A;
    
    while (A > 0 && E > S) {
        if (day % 9 == 0) {
            day += 2;
        }
        if (day % 3 == 0) {
            S += (S / 3);
            day += 1;
            A -= 1;
        } else {
            S += (S / 10);
            day += 1;
            A -= 1;
        }
    }
    if (A <= 0){
        cout << "unsalable";
    } else {
        cout << day;
    }
}
