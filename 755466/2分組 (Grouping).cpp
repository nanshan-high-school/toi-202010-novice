#include <iostream>
using namespace std;

int main() {
    int N = -1, P = -1, max = -1, num;
    
    while ((P <= 0 || P > 999999999) && (N < 1 || N > 8)) {
        cout << "" << "";
        cin >> N >> P;
    }

    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;
    
    if (P > 0) {
        n1 = P % 10;
        P /= 10;
    } 

    if (P > 0) {
        n2 = P % 10;
        P /= 10;
    } 

    if (P > 0) {
        n3 = P % 10;
        P /= 10;
    } 
    
    if (P > 0) {
        n4 = P % 10;
        P /= 10;
    } 

    if (P > 0) {
        n5 = P % 10;
        P /= 10;
    } 

    if (P > 0) {
        n6 = P % 10;
        P /= 10;
    } 

    if (P > 0) {
        n7 = P % 10;
        P /= 10;
    } 

    if (P > 0) {
        n8 = P % 10;
        P /= 10;
    } 

    if (P > 0) {
        n9 = P % 10;
        P /= 10;
    } 
    

    if (N == 1) {
        max = n1;
        num = 1;

        if (max <= n2) {
            max = n2;
            num = 2;
        }

        if (max <= n3) {
            max = n3;
            num = 3;
        }

        if (max <= n4) {
            max = n4;
            num = 4;
        }

        if (max <= n5) {
            max = n5;
            num = 5;
        }

        if (max <= n6) {
            max = n6;
            num = 6;
        }

        if (max <= n7) {
            max = n7;
            num = 7;
        }

        if (max <= n8) {
            max = n8;
            num = 8;
        }

        if (max <= n9) {
            max = n9;
            num = 9;
        }
    }

    if (N == 2) {
        max = n1 + n2;
        num = 1;

        if (max <= n3 + n4) {
            max = n3 + n4;
            num = 2;
        }

        if (max <= n5 + n6) {
            max = n5 + n6;
            num = 3;
        }

        if (max <= n7 + n8) {
            max = n7 + n8;
            num = 4;
        }

        if (max <= n9) {
            max = n9;
            num = 5;
        }
    }

    if (N == 3) {
        max = n1 + n2 + n3;
        num = 1;

        if (max <= n4 + n5 + n6) {
            max = n4 + n5 + n6;
            num = 2;
        }

        if (max <= n7 + n8 +n9) {
            max = n7 + n8 + n9;
            num = 3;
        }
    }

    if (N == 4) {
        max = n1 + n2 + n3 + n4;
        num = 1;

        if (max <= n5 + n6 + n7 + n8) {
            max = n5 + n6 + n7 + n8;
            num = 2;
        }

        if (max <= n8 +n9) {
            max = n8 + n9;
            num = 3;
        }
    }
    
    if (N == 5) {
        max = n1 + n2 + n3 + n4 + n5;
        num = 1;

        if (max <= n6 + n7 + n8 + n9) {
            max = n6 + n7 + n8 + n9;
            num = 2;
        }
    }

    if (N == 6) {
        max = n1 + n2 + n3 + n4 + n5 + n6;
        num = 1;

        if (max <= n7 + n8 + n9) {
            max = n7 + n8 + n9;
            num = 2;
        }
    }

    if (N == 7) {
        max = n1 + n2 + n3 + n4 + n5 + n6 + n7;
        num = 1;

        if (max <= n8 + n9) {
            max = n8 + n9;
            num = 2;
        }
    }

    if (N == 8) {
        max = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8;
        num = 1;

        if (max <= n9) {
            max = n9;
            num = 2;
        }
    }

    cout << num << " " << max;
}
