//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int run10_Exercise() {
    int matrix[120][120], rows, cols;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < cols; i++) {
        int counter = 0;
        for (int j = 0; j < rows; j++) {
            if (matrix[i][j] == i * 100 + j) {
                {
                    counter++;
                }
            }
            cout << counter << endl;
        }
    }
    return 1;
}
