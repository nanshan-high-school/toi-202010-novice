#include <iostream>
using namespace std;
int main() {
    int money;
    int tian;
    int cici;
    int tian_num;
    int cici_num;

    do {
        cin >> money;
    }while (money >= 10000 && money <= 0);

    tian_num = money;
    cici_num = money;

    tian_num /= 2000;
    cici_num /= 1000;

    tian = money;
    cici = money;

    for (int i = 0; i < tian_num; i++){
        if (tian >= 2000 ) {
            tian -= 200;
        }
    }

    for (int j = 0; j < cici_num; j++){
        if (cici >= 1000 ) {
            cici -= 100;
        }
    }
    if (tian > cici){
        cout << cici << " ";
        cout << "1";
    } else {
        cout << tian << " ";
        cout << "0";
    }
}
