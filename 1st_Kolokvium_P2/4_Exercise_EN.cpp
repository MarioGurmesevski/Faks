//
// Created by mario on 11/15/2024.
//

#include <iostream>
using namespace std;

int calculateGrade(float gotten, float max) {
    float percent = (gotten / max) * 100;
    if (percent >= 90 && percent <= 100) cout << percent << " " << 10;
    else if (percent >= 80 && percent < 90) cout << percent << " " << 9;
    else if (percent >= 70 && percent < 80) cout << percent << " " << 8;
    else if (percent >= 60 && percent < 70) cout << percent << " " << 7;
    else if (percent >= 50 && percent < 60) cout << percent << " " << 6;
    else {
        cout << percent << " "<< "FAIL";
    }
}


int run4_Exercise_EN() {
    int total, gotten, max;
    cin >> total;

    for (int i = 0; i < total; i++) {
        cin >> gotten >> max;
        calculateGrade(gotten, max);
        cout << endl;
    }
    return 0;
}
