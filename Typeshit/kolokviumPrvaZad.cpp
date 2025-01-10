//
// Created by mario on 11/13/2024.
//

#include <iostream>
#include <cmath>
using namespace std;

int runKolokviumPrvaZad() {
    int n, min, max, counter = 0;
    float sum = 0;
    if (cin >> n) {
        min = max = n;
        sum += n;
        counter++;
        while (cin >> n) {
            if (min > n) min = n;
            if (max < n) max = n;

            sum+=n;
            counter++;
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<sum/counter<<endl;

    return 0;
}
