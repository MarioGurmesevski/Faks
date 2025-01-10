//
// Created by mario on 12/15/2024.
//
#include <iostream>
using namespace std;

int GCD(int m, int n) {
    if (!n) {
        return m;
    }

    return GCD(n, m % n);
}

int LCM(int m, int n) {
    return m * n / GCD(m, n);
}

int runTask_07() {
    int n, a[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lcm = a[0];
    for (int i = 1; i < n; i++) {
        lcm = LCM(lcm, a[i]);
    }

    cout << lcm;
    return 0;
}

