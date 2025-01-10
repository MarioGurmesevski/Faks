// //
// // Created by mario on 11/12/2024.
// //

#include <iostream>
#include <cmath>
using namespace std;

int firstTwoNums(int x) {
    int counter = 0;
    int temp = x;

    if(x <=100) {
        return x;
    }
    while (temp != 0) {
        temp/=10;
        counter++;
    }
    int divider = pow (10, counter-2);

    return x/divider;
}

int runPrvaZad() {
    int x;
    cin >> x;
    cout << firstTwoNums(x) << endl;

    return 0;
}
