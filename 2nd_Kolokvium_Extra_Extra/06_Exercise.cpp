//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

void recursive_sub(int n, int tempN, bool hasPassNeg = false) {
    cout << tempN << " ";
    if (n == tempN && hasPassNeg) return;
    if (tempN > 0 && !hasPassNeg) recursive_sub(n, tempN - 3, false);
    else recursive_sub(n, tempN + 3, true);
}

int run6_Exercise() {
    int n;
    cin >> n;

    recursive_sub(n, n);
    return 1;
}
