#include <iostream>
using namespace std;

int main() {
    int N , zero, zero_total, one, one_total;
    cout << "";
    cin >> N;  

    one = N;
    one_total = N;
    zero = N;
    zero_total = N;
    

    //1
    while (one >= 1000) {
        one -= 1000;
        one_total -= 100;
    }

    //0
    while (zero >= 2000) {
        zero -= 2000;
        zero_total -= 200;
    }



    if (zero_total <= one_total) {
        cout << zero_total << " 0";
    } else {
        cout << one_total << " 1";
    }
}
