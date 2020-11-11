#include <iostream>
using namespace std;

int main() {
  int A, B, N, C, D;
  cin >> N;
  if (N > 2000) {
     C = N/2000;
     A = N-200*C;
  } else {
    A = N;
  }
  if (N > 1000) {
     D = N / 1000;  
     B = N-100*D;
  } else {
    B = N;
  }
  if (A > B) {
     cout << B << " " << 1;
  } else {
    cout << A << " " << 0; 
    }
}

