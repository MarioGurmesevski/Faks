//
// Created by mario on 11/13/2024.
//

#include <chrono>
#include <iostream>
#include <cmath>
using namespace std;

int runKolokviumTretaZad() {
    int n, sum = 0;
    cin >> n;

    while (n >= 10) {
        int lastTwoDigits = n % 100;
        sum = 0;

        while (lastTwoDigits != 0) {
            sum += lastTwoDigits % 10;
            lastTwoDigits /= 10;
        }
        if (sum >10) {
            while (n > 100) {
                n /= 100;
                n = n * 100 + sum;
                break;
            }
        } else if (sum<100) {

            if (n > 10 && n < 100) {
                n /= 100;
                n = n * 10 + sum;
                break;
            }
            if (n >= 100) {
                n /= 100;
                n = n * 10 + sum;
            }
        }
        cout << n << "->";
    }
    cout << n;

    return 0;
}

/* OLD alot of while loops

int runKolokviumTretaZad() {
    int n, sum = 0, counter = 0, sumCounter = 0;
    cin >> n;

    while (n>=10) {
        int temp = n;
        int lastTwoDigits = temp % 100;
        sum = 0, counter = 0, sumCounter = 0;

        while (temp != 0) {
            temp /= 10;
            counter++;
        }
        while (lastTwoDigits != 0) {
            sum += lastTwoDigits % 10;
            lastTwoDigits /= 10;
        }
        int sumTemp = sum;
        while (sumTemp != 0) {
            sumTemp /= 10;
            sumCounter++;
        }

        if (sumCounter == 2) {
            int limiter = pow(10, sumCounter);
            int multiplier = pow(10, sumCounter);

            while (n > limiter) {
                n /= limiter;
                n = n * multiplier + sum;
                break;
            }
        }else if (sumCounter == 1) {
            int limiter = pow(10, sumCounter + 1);
            int multiplier = pow(10, sumCounter);

            if(counter==2) {
                n /= limiter;
                n = n * multiplier + sum;
                break;
            }
            if (n>=limiter) {

                n /= limiter;
                n = n * multiplier + sum;
            }
        }
    cout << n<< "->";
    }

    cout <<n;


    return 0;
}

*/
