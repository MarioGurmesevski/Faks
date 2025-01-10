//
// Created by mario on 11/13/2024.
//

#include <iostream>
#include <cmath>
using namespace std;

int runKolokviumVtoraZad() {
    int n, counter = 0;
    float sum;

    cin >> n;

    if (n > 0) {
        for (; n != 0; n--) {
            if (n % 2 == 0) {
                sum += n * n;
                counter++;

                cout<<n<<"*"<<n<<"="<<n*n<<endl;
            }
        }
        cout<<sum<<endl;
        cout<<sum/counter<<endl;
    }

    return 0;
}
