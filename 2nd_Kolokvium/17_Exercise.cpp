//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run17_Exercise() {
    int matrix[100][100];
    int row, col, sum1 = 0, sum2 = 0, diff;
    cin >> row >> col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        sum1 = 0, sum2 = 0;

        if (col % 2 == 0) {
            for (int j = 0; j < col / 2; j++) {
                sum1 += matrix[i][j];
            }
            for (int j = col / 2; j < col; j++) {
                sum2 += matrix[i][j];
            }

            diff = abs(sum1 - sum2);

            matrix[i][col / 2 - 1] = diff;
            matrix[i][col / 2] = diff;
        } else {
            for (int j = 0; j < col / 2 + 1; j++) {
                sum1 += matrix[i][j];
            }

            for (int j = col / 2 ; j < col; j++) {
                sum2 += matrix[i][j];
            }


            diff = abs(sum1 - sum2);

            matrix[i][col / 2] = diff;
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 1;
}
