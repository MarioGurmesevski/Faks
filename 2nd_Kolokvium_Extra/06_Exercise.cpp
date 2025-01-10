//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int par(int *a, int n) {
    int min = *(a + 0);
    bool found = false;
    for (int i = 0; i < n; i++) {
        int counter = 0;
        for (int j = 0; j < n; j++) {
            if (*(a + i) == *(a + j)) {
                counter++;
            }
        }
        if (counter % 2 == 0 && counter != 0) {
            found = true;
            if (*(a + i) < min) {
                min = *(a + i);
            }
        }
    }
    if (found) {
        return min;
    }
    return 0;
}

int run6_Exercise() {
    int array[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    if (par(array, n) > 0) {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << par(array, n);
    }else {
        cout<< "Nitu eden element ne se pojavuva paren broj pati!";
    }

    return 1;
}
