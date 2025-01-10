//
// Created by mario on 12/15/2024.
//
#include <iostream>
using namespace std;

float xnxx(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return (n - 1) * xnxx(n - 1) / n + xnxx(n - 2) / n;
}

int runTask_03() {
    int n;
    cin >> n;
    cout << "xnxx(" << n << ") = " << xnxx(n) << endl;
    return 0;
}
