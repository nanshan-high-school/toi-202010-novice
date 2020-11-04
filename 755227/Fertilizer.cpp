#include <iostream>
using namespace std;

int main() {

    int original;
    int want;
    int customer;
    int day = 0;
    int day_want = 0;

    cin >> original >> want >> customer;

    while (customer > 0) {
        for (int i = 0;i < 8;i++) {
            if (original < want) {
                day++;
                if (day % 3 == 0) {
                    original += original / 3;
                } else {
                    original += original / 10;
                }
            }
            
            if (original >= want) {
                day_want = day + 1;
                cout << day_want;
                return 0;
            } 
        }

        day = day + 2;
        customer--;

        if (customer <= 0) {
            cout << "unsalable";
            break;
        }      
    }
}
