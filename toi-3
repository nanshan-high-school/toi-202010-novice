#include "iostream"
using namespace std;

int main() {
  int day= 1,high,excepthigh,a;
  cin >> high >> excepthigh >> a;
  while(true) {
    if (a <= 0){
      cout << "unsalable";
      break;
    }else if(day % 8 == 0 ){
      if(high < excepthigh){
        a = a-1;
        day = day +1;
        continue;
      }else if(high >= excepthigh){
        cout << day+3;
        break;
      }
    }else if(day % 3 == 0) {
      high = high + (high/3);
      if (high >= excepthigh) {
        cout << day+1;
        break;
      }else{
      day = day +1;
      }
    }else if(high < excepthigh) {
      high = high + (high/10);
      if (high >= excepthigh){
        cout << day;
        break;
      }else {
        day = day + 1;
      }
    }else if(high >= excepthigh){
      cout << day;
      break;
    }else{
      cout << "unsaleable";
      break;
    }
  }
}
