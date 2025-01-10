//
// Created by mario on 11/12/2024.
//

#include <iostream>
using namespace std;

int digital_root(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num != 0) {
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        num = sum;
    }
    return num;
}


int runCodeWarsP3() {
    int num;
    cin >> num;
    cout << digital_root(num);
    return 0;
}
