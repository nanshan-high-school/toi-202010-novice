// #include <iostream>
// using namespace std;
// 
// int main() {
//     int N, P, max;
//     int i, j;
//     int code[9] = {};
//     int big;
// 
//     cin >> N >> P;
// 
//     code[0] = P % 10;                     
//     code[1] = (P % 100) / 10; 
//     code[2] = (P % 1000) / 100;   
//     code[3] = (P % 10000) / 1000;      
//     code[4] = (P % 100000) / 10000;        
//     code[5] = (P % 1000000) / 100000;       
//     code[6] = (P % 10000000) / 1000000;     
//     code[7] = (P % 100000000) / 10000000;   
//     code[8] = (P % 1000000000) / 100000000;
// 
//     // for(int i = 0; i < 9; i++){
//     //     cout << code[i] << "\n";
//     // }
//     for(i = 0; i <N; i++) {
//         
//     }
// 
// }
#include <iostream>
using namespace std;
int main() {
	int num, num1, num2, num3, num4, maxnum, group = 1; int maxgroup;
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
