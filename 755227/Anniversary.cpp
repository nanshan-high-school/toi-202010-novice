#include <iostream>
using namespace std;

int main() {
    int price = 0;

    do {
        cin >> price;
    } while (price > 10000 || price < 0);
    
    int depart0 = price, depart1 = price;
    int depart0_ = price, depart1_ = price;
    
    while (depart0_ >= 2000) {
        depart0 = depart0 - 200;
        depart0_= depart0_ - 2000;
    }

    while (depart1_ >= 1000) {
        depart1 = depart1 - 100;
        depart1_= depart1_ - 1000;
    }

    if (depart0 > depart1) {
        cout << depart1 << " 1";
    } else {
        cout << depart0 << " 0";
    }
}
