#include <iostream>
using namespace std;
int main() {
    int cost, spend_1 = 0, spend_2 = 0;
    cin >> cost;
    for (int cost1 = cost; cost1 >= 2000; cost1 -= 2000)
    {
        spend_1 += 200;
    }
    spend_1 = cost - spend_1;
    for (int cost2 = cost; cost2 >= 1000; cost2 -= 1000)
    {
        spend_2 += 100;
    }
    spend_2 = cost - spend_2;
    if (spend_1 > spend_2)
    {
        cout << spend_2 << " 1";
    }
    else
    {
        cout << spend_1 << " 0";
    }
}
//this code is copyright
