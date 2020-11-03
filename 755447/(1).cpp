#include <iostream>
using namespace std;

int main() {
    float S, E;
    int A, total, day;
    
    cout << "" << "" << "";
    cin >> S >> E >> A;
    total = S;

    for (int i = 1; total <= E || A <= 0; i++) {
        day = i;

        if (i % 3 == 0) {
            total = total + (total / 3);
        } else {
            total = total + (total / 10);
        }

        if (i % 9 == 0) {
            i += 1;
            A -= 1;
        }
        if (A <= 0) {
            cout << "unsalable";
            return 0;
        }
        
    }
    cout << day;

}
