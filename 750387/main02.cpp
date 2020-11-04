#include <iostream>
#include <math.h>
using namespace std;
int SumPower(int n); //函式宣告

int main() {
    int Man;
    int Power;
    int CalTeam, MaxTeam;
    int MaxNum, CalNum, CalNum2;
    int i;

    cin >> Man >> Power;

    CalTeam = 0;
    MaxTeam = 0;
    MaxNum = 0;

    while (Power != 0) {
        CalNum = 0;
        CalNum2 = 0;
        CalTeam ++;

        CalNum = Power % int(pow(10, Man));
        Power /= int(pow(10, Man));

        //cout << CalTeam << "-" << CalNum ;

        CalNum2 = SumPower(CalNum);

        if (CalNum2 >= MaxNum) {
            MaxNum = CalNum2;
            MaxTeam = CalTeam;
        }
        //cout << "-" << CalNum2 << endl;
    }

    cout << MaxTeam << " " << MaxNum <<endl;

    return 0;
}

int SumPower(int n) {
    int t = 0;
    while (n != 0) {
        t += n % 10;
        n /= 10;
    }

    return t;
}
