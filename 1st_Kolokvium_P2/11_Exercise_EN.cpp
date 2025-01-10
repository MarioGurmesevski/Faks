//
// Created by mario on 11/15/2024.
//

#include <iostream>
using namespace std;

int triangle(int a, int b, int c) {
    if (180 == a + b + c) {
        if (a == 90 || b == 90 || c == 90) cout << "YES" << endl << "RIGHT";
        else if (a > 90 || b > 90 || c > 90) cout << "YES" << endl << "OBTUSE";
        else if (a < 90 && b < 90 && c < 90) cout << "YES" << endl << "ACUTE";
    } else cout << "NO";
    return 0;
}


int run11_Exercise_EN() {
    int a, b, c;
    cin >> a >> b >> c;
    triangle(a, b, c);
    return 0;
}
