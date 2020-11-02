#include <iostream>
using namespace std;
int main() {
    int start;
    int want;
    int customer;
    int day = 0;
    int day_want = 0;
    cin >> start >> want >> customer;

    while (customer > 0) {
        for (int i = 0;i < 8;i++) {
            if (start < want) {
                day++;
                if (day % 3 == 0) {
                    start += start / 3;
                } else {
                    start += start / 10;
                }
            }
            if (start >= want) {
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
