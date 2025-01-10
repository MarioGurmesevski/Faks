//
// Created by mario on 11/12/2024.
//

#include <iostream>
using namespace std;

int multipliesWithThreeAndFive(int num) {
    int sum = 0;
    if (num < 0) {
        return 0;
    }

    for (int i = num - 1; i > 0; i--) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}


int runCodeWarsP6() {
    int num;
    cin >> num;
    cout << multipliesWithThreeAndFive(num) << endl;

    return 0;
}
