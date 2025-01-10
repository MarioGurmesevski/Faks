//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include <cmath>
#include<cstring>
using namespace std;

int run2_Exercise() {
    int n, counter = 1;

    cin >> n;

    if (n > 400) {
        return 0;
    }
    int size = ceil(sqrt(n));
    int matrix[size][size];

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < size; j++) {
                if (counter <= n) {
                    matrix[j][i] = counter;
                    ++counter;
                }else if (counter > n) {
                    matrix[j][i] = 0;
                }
            }
        }else {
            for (int j = size-1; j >= 0; j--) {
                if (counter <= n) {
                    matrix[j][i] = counter;
                    ++counter;
                }else if (counter > n) {
                    matrix[j][i] = 0;
                }
            }
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 1;
}
