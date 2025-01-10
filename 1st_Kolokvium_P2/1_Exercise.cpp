//
// Created by mario on 11/15/2024.
//

#include <iostream>
using namespace std;

int sweetNumber(int from, int to) {
    for (int i = from; i <= to; i++) {
        int temp = i;
        int counter = 0;
        int counter1 = 0;
        while (temp != 0) {
            int digit = temp % 10;
            temp /= 10;
            if (digit == 2 || digit == 4 || digit == 6 || digit == 8 || digit == 0) {
                counter++;
            }
            counter1++;
        }
        if (counter1 == counter) return i;
        if (i == to) return 0;
    }
}


int run1_Exercise() {
    int from, to;
    cin >> from >> to;
    if (sweetNumber(from, to) == 0)cout << "NE";
    else {
        cout << sweetNumber(from, to) << endl;
    }
    return 0;
}
