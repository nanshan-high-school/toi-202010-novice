#include <iostream>
using namespace std;
int main() {
    int price;
    int price_chi;
    int price_tian;
    cin >> price;
    price_chi = price - 100 * (price / 1000);
    price_tian = price - 200 * (price / 2000);
    if (price_chi < price_tian) {
        cout << price_chi;
        cout << " ";
        cout << 1;
    } else if (price_chi >= price_tian) {
        cout << price_tian;
        cout << " ";
        cout << 0;
    }
}
