//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run18_Exercise() {
    int n;
    float matrixA[100][100], matrixB[100][100];
    float x = 0, y = 0;
    cin >> n;
    if (n >= 2) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrixA[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j < i) x += matrixA[i][j];
                if (j > n - 1 - i) y += matrixA[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (n % 2 == 0) {
                    if (i == j) matrixB[i][j] = x;
                    else if (i + j == n - 1) matrixB[i][j] = y;
                }else {
                    if (n / 2 == i && n / 2 == j) matrixB[i][j] = x + y;
                    else if (i == j) matrixB[i][j] = x;
                    else if (i + j == n - 1) matrixB[i][j] = y;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matrixB[i][j] << " ";
            }
            cout << endl;
        }
    }


    return 1;
}
