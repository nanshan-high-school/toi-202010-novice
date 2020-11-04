#include <iostream>
using namespace std;

int main() {
    int N1;
    int N2;
    int total = 0;

    cin >> N1;

    N2 = (N1 % 2000) / 1000;

    total = N1 - ((N1 / 2000) * 200 + (N2 * 100));

    if (N2 >= 1) {
        cout << total << " " << "1" << endl;
    } else {
        cout << total << " " << "0" << endl;

    }
}
