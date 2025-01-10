//
// Created by mario on 12/15/2024.
//
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0)  return 1;
    return n * factorial(n - 1);
}

int sum(int num) {
    if (num == 0)  return 1;
    return num * sum (num- 1);
}

int runTask_01() {
    int n,result=0;
    cin >> n;
    if (n > 0) {
        for (int i = 1; i < n; i++) {
            int s = sum(i);
            result += factorial(s);
            cout << s << "! + ";
        }

        int s = sum(n);
        result += factorial(s);
        cout << s << "! = " << result << endl;
    }
    return 0;
}
