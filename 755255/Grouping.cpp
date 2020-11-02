#include <iostream>
using namespace std;
int main() {
    int num;
    int group;
    int addition = 0;
    int max1 = -1;
    int count = 0;
    int count_max = 0;
    cin >> group >> num;
    for (int i = 0;i < 9;i++) {
        for (int j = 0;j < group;j++) {
            addition += num % 10;
            num = num / 10;  
        }
        count++;
        if (addition >= max1){
            max1 = addition;
            count_max = count;
        }
        addition = 0;
    }
    cout << count_max << " " << max1;
}
