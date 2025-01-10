//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int sum_pos(int *a, int ind, int n) {
    if (ind >= n) return 0;

    int sum = 0;

    for (int i = ind; i < n; i++) {
        sum += *(a + i);
    }
    return sum;
}


int run3_Exercise() {
    int n, ind, a[100];
    cin >> n;

    if (n > 100) return 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> ind;
    cout << sum_pos(a, ind, n);


    return 1;
}
