#include <iostream>

using namespace std;

int main() {
    int i, N, con, per[10], group, max=0, sum=0;
    long P;

    cin >> N >> P;

    int flag = N;

    for(i=1 ; i < 10 ; i ++) {
        per[i] = P % 10;
        P /= 10;
        if(P == 0) {
            con = i;
            break;
        }
    }

    for(i=1 ; i <= con ; i ++) {
        sum += per[i];
        if(flag == 0) {
            if(max <= sum) {
                max = sum;
                group = i / N;
            }
        sum = 0;
        flag = N;
        }
    }

    cout << group << " " << max << endl ;
        flag -- ;
}
