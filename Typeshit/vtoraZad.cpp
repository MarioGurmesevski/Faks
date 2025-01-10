// //
// // Created by mario on 11/12/2024.
// //

#include <iostream>
using namespace std;

// Vnesuvas x,c,p. Ispecati 10 broja pogolemi od x sto e imaat cifrata c, p pati.
// So funkcijata Count occurence da se vrati vrednost kolku pati se cita cifrata vo brojot.


int func(int num, int c) {
    int digit = 0;
    int counter2 = 0;

    while (num != 0) {
        digit = num % 10;

        if (digit == c) {
            counter2++;
        }

        num /= 10;
    }

    return counter2;
}

int runVtoraZad() {
    int x, c, p;
    int counter = 1;
    cin >> x >> c >> p;

    for (int i = x + 1; counter < 10; i++) {
        if (func(i, c) == p) {
            cout << i << endl;;
            counter++;
        }
    }

    return 0;
}
