#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int competitor, listofstrength, grouping[9] = {0}, addition[9] = {0}, max = 0, max_label;
    cin >> competitor >> listofstrength;
    for (int i = 0; i < 9; i++) 
    {
        grouping[i] = listofstrength % (int)pow(10, competitor);
        listofstrength /= (int)pow(10, competitor);
        while (grouping[i] != 0) 
        {
            addition[i] += grouping[i] % 10;
            grouping[i] /= 10;
        }
        if (addition[i] >= max) {
            max = addition[i];
            max_label = i;
        }
    }
    cout << max_label + 1 << " " << addition[max_label];
}
//this code is copyright
