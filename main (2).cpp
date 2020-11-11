#include <iostream>

using namespace std;

int main() {

    int S, E, A, i, day=1;
    
    cin >> S >> E >> A;

    while (true) {

        if(A==0) {
            cout << "unsalable" << endl ;
            break;
        }
        
        if(E<=S) {
        cout << day << endl ;
        break;
        }

        if(day % 10 % 9 == 0) {
            day += 2;
            A--;
        }
        else if(day % 3 == 0) {
            S += (S/3) ;
        }
        else {
            S += (S/10) ;
        }
        day++;
    }
}
