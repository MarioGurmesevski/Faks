//
// Created by mario on 11/15/2024.
//

#include <iostream>
using namespace std;

int funNumber(int x) {
    for (int i = x - 1;; i--) {
        int temp = i;
        int counter = 0;
        int rev = 0;
        int digit = 0;
        if (x <= 9) {
            return 0;
        }
        while (temp != 0) {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
            counter++;
        }
        if (rev % counter == 0) {
            return i;
        }
    }
}


int run2_Exercise() {
    int x;
    cin >> x;
    if (funNumber(x) == 0)
        cout << "Brojot ne e validen";
    else {
        cout << funNumber(x) << endl;
    }
    return 0;
}
