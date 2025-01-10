// //
// // Created by mario on 11/12/2024.
// //

#include <iostream>
#include <cmath>
using namespace std;

// Vnesuvas broj X i vnesuvas neodreden broj celi broevi se dodeka ne se vnese nesto razlicno od broj.
// Proveruvas (so funkcii sekako) kolku pati se sodrzi brojot X vo sekoj od tie broevi.

int checker(int x, int num) {
    int temp = x;
    int xCounter = 0;
    int counter = 0;

    while (temp != 0) {
        temp /= 10;
        xCounter++;
    }

    int delitel = pow(10, xCounter);

    while (num != 0) {
        if (num % delitel == x) {
            counter++;
            num /= delitel;
        }else {
        num /= 10;
        }
    }

    return counter;
}


int runTretaZad() {
    int x, num;
    cin >> x;
    while (cin >> num) {
        cout << num <<" "<< checker(x, num) << endl;
    }
    return 0;
}
