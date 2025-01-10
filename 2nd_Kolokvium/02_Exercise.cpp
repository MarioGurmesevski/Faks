//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run2_Exercise() {
    int number, timer, leadingNum = 0, temp = 0, temp1;

    cin >> timer;

    while (timer != 0) {
        for (int i = 0; i < timer; i++) {
            cin >> number;
            temp1 = number;

            while (number >= 10) {
                number /= 10;
            }
            if (number > temp) {
                temp = number;
                leadingNum = temp1;
            }
        }

        cout<<leadingNum<<endl;
        temp=0;
        leadingNum = 0;
        cin >> timer;
    }



    return 0;
}
