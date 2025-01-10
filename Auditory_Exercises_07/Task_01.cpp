//
// Created by mario on 11/25/2024.
//

#include <iostream>
using namespace std;

int runTask_01() {
    int num1, num2, number, i = 0;

    //Size of the first array
    cin >> num1;
    //Size of the second array
    cin >> num2;

    int a[num1], b[num2];

    if (num1 > 100 || num2 > 100) {
        cout << "The array exceeded 100 number" << endl;
        return 0;
    }

    if (num1 != num2) {
        cout << "The arrays are a different size" << endl;
    } else {
        cout << "Numbers of the first array:" << endl;
        for (i=0; i < num1; i++) {
            cout <<i <<":";
            cin >> number;
            a[i] = number;
        }
        cout << "Numbers of the second array:" << endl;

        for (i=0; i < num2;i++) {
            cout <<i <<":";
            cin >> number;
            b[i] = number;
        }

        for (i=0; i < num1; i++) {
            if (b[i] != a[i]) {
                // if even 1 digit is different it will stop the code
                break;
            }
        }

        if (i == num1) {
            cout << "The arrays are equal"<<endl;
        } else {
            cout << "The arrays are not equal" << endl;
        }
    }


    return 0;
}
