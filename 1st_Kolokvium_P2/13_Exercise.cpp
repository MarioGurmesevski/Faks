//
// Created by mario on 11/15/2024.
//

#include <iostream>
using namespace std;
int lastMax=0;

int calculateTotalPlusLastMax(int x, int count) {
    int max = 0;
    int sum = 0;

    while (x != 0) {
        int digit = x % 10;
        sum += digit;
        if (max < digit) max = digit;
        x /= 10;
    }
    if (count > 1) {
        sum +=lastMax;
    }
    lastMax = max;

    return sum;
}


int run13_Exercise() {
    int x;
    int count = 0;
    while (cin >> x) {
        count++;
        cout << x << ": " << calculateTotalPlusLastMax(x, count)<<endl;
    }
    return 0;
}
