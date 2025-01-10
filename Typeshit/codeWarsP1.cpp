// //
// // Created by mario on 11/12/2024.
// //

#include <iostream>
#include <cmath>
using namespace std;

int square_digits(int num) {
    int sum = 0;
    int temp = num;
    int counter = 0;
    num = 0;

    while (temp % 10 == 0 && temp != 0) {
        temp /= 10;
        counter++;
    }

    while (temp != 0) {
        int digit = temp % 10;
        num = num * 10 + digit;
        temp /= 10;
    }


    while (num != 0) {
        int digit = num % 10;
        int square = digit * digit;

        if (square > 10) {
            sum = sum * 100 + square;
        } else {
            sum = sum * 10 + square;
        }
        num /= 10;
    }
    if (counter > 0) {
        sum *= pow(10, counter);
    }
    return sum;
}

int runCodeWarsP1() {
    int num;
    cin >> num;
    cout << square_digits(num) << endl;

    return 0;
}