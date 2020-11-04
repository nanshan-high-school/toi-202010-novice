#include <iostream>
using namespace std;
int main() {
    int normalheight, requestheight, patient, day;
    cin >> normalheight >> requestheight >> patient;
    for (day = 1; normalheight < requestheight; day++)
    {
        if ((day % 3 !=0) && (day % 11 < 9))
        {
            normalheight = normalheight * 11 / 10 ;
        }
        else if ((day % 3 == 0) && (day % 11 < 9))
        {
            normalheight = normalheight * 4 / 3 ;
        }
        if (day % 11 == 0 && day > 10)
        {
            patient--;
            if (patient == 0)
            {
                break;
            }
        }
    }
    if (patient == 0)
    {
        cout << "unsalable";
    }
    else
    {
        cout << day;
    }
}
//this code is copyright
