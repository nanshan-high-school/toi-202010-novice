#include <iostream>
using namespace std;

int main() {

    int num;
    int group;
    int plus = 0;
    int max1 = -1;
    int count = 0;
    int count_max = 0;

    cin >> group >> num;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < group; j++) {
            plus += num % 10;
            num = num / 10;  
        }
        count++;
        if (plus >= max1) {
            max1 = plus;
            count_max = count;
        }
        plus = 0;
    }

    cout << count_max << " " << max1;
}
