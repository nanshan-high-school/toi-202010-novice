#include <iostream>
using namespace std;
int main() {
    int a, b, c, d=1, e;
    cin >> a;
    cin >> b;
    cin >> c;
    while (a < b && c > 0){
    if (d % 3 == 0) {
		a = a + e / 3;
	}
	else if (d % 10 == 9 || d % 10 == 0){
	    a=a + 0;
	}
	else if (d > 10 && d % 10 == 2) {
		c = c - 1 ;
	} 
	d++;
	e = a;
	a = a + e / 10;
    }
     if (c == 0) {
	     cout << "unsalable";

    }
    else if (c > 0){
	    cout << d;
    }
}
