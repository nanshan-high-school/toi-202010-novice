#include <iostream>
using namespace std;
int main() {
    int A, B, a, b, N;
    cout << "";
    cin >> N;

    a = (N / 2000) * 200;
    A = N - a;

    b = (N / 1000) * 100;
    B = N - b;

    if (A < B){
        cout << A << " 0";
    }
    if (A > B){
        cout << B << " 1";
    }
    if (A == B){
        cout << A << " 0";
    }
}
