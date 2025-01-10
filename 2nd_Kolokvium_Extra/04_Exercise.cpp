//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run4_Exercise() {
    int rows, cols, r, c, min;
    int matrix[100][100];
    cin >> rows >> cols;
    cin >> r >> c;
    if (0 < rows && rows < 30 && 0 < cols && cols < 30 && 0 <= r && r < rows && 0 <= c && c < cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];
            }
        }
        min = matrix[0][0];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (min > matrix[i][j]) min = matrix[i][j];
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = min;
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 1;
}
