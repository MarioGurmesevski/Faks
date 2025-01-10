//
// Created by mario on 12/15/2024.
//
#include <iostream>
using namespace std;

int isThere8(int n) {
    if (n == 0)return 0;
    if ((n/10)%10==8 && n%10==8) return isThere8(n/10)+2;
    if (n % 10 == 8) return isThere8(n / 10)+1;
    return isThere8(n / 10);
}

int runTask_05() {
    int n;
    cin >> n;

    cout << isThere8(n);

    return 0;
}
