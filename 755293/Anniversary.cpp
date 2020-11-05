#include <iostream>

using namespace std;

int main() {
    int prize, con, shop;
    cin >> prize;
    con=prize/1000;
    prize-=con*100;
    if(con%2==0) shop=0;
    else  shop=1;
    cout << prize << " " << shop << endl ;
}
