#include <iostream>
using namespace std;
int main() {
	int num, num1, num2, num3, num4, maxnum, group = 1, maxgroup;
	cin >> num;
	cin >> num1;
	while (num1 > 0) {
		for (int i = 0; i < num; i++) {
			num4 = num3;
			num2 = num1 % 10;
			num1 = num1 / 10;
			num3 = num4 + num2;
			if (num3 > maxnum) {
				maxnum = num3;
				maxgroup = group;
			}
		}
		num3 = 0;
		group++;
	}
	cout << maxgroup << " " << maxnum;
}
