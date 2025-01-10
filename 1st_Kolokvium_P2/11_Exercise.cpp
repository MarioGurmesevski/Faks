//
// Created by mario on 11/15/2024.
//

#include <iostream>
using namespace std;

int cikCak(int x) {
    int temp = x;
    int counter1 = 0;
    int counter2 = 0;
    while (temp >= 10) {
        int digit1 = temp % 10;
        int digit2 = (temp / 10)%10;
        temp /= 10;
        if (digit1 < 5 && digit2 >= 5 || digit2 < 5 && digit1 >= 5) {
            counter2++;
        }
        counter1++;
    }
    if (counter2 == counter1) {
        return x;
    }
    return 0;
}


int run11_Exercise() {
    int x;
    while (cin >> x) {
        if (x >= 10) {
            int result = cikCak(x);
            if (result > 0) {
                cout << result << endl;
            }
        }
    }

    return 0;
}
    