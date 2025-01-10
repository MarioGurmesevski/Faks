//
// Created by mario on 11/12/2024.
//

#include <iostream>
#include <cmath>
using namespace std;

bool narcissistic(int num) {
    int temp = num,sum = 0, counter = 0;
    if (num < 10) {
        return true;
    }
    for(int i =num;i>0; i/=10)counter++;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, counter);
        temp /= 10;
    }
    return sum==num;
}

int runCodeWarsP7() {
    int num;
    cin >> num;
    cout << narcissistic(num) << endl;

    return 0;
}
