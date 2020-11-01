#include <iostream>
using namespace std;
int main() {
    int num;cin >> num;
    int a,b;
    a = num / 1000;
    b = num - a * 100;
    if (a % 2 == 0) {
	 cout << b << " 0";
    }
    else {
	cout << b << " 1";
    }
}
