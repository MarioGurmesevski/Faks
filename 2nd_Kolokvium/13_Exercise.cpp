//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run13_Exercise() {
    int array[100][100], rows, cols, x;
    cin >> x;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];
        }
        if (sum == x) {
            for (int j = 0; j < cols; j++) {
                array[i][j] = 0;
            }
        }
        if (sum > x) {
            for (int j = 0; j < cols; j++) {
                array[i][j] = 1;
            }
        }
        if (sum < x) {
            for (int j = 0; j < cols; j++) {
                array[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout<<endl;
    }

    return 1;
}
