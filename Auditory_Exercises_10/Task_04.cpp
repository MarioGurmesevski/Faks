//
// Created by mario on 12/15/2024.
//
#include <iostream>
using namespace std;

int digitsSum(int n) {
    if (n == 0) return 0;
    return n % 10 + digitsSum(n / 10);
}

int runTask_04() {
    int n;
    cin >> n;

    cout << digitsSum(n);

    return 0;
}
