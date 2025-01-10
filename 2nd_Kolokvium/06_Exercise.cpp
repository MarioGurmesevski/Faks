//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run6_Exercise() {
    int matrix[100][100];

    int rows, columns, counter = 0;
    cin >> rows >> columns;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns-2; j++) {
            if (matrix[i][j] == 1 && matrix[i][j+1] == 1 && matrix[i][j+2] == 1) {
                counter++;
                break;
            }
        }
    }
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows-2; j++) {
            if (matrix[j][i]==1 && matrix[j+1][i] == 1 && matrix[j+2][i] == 1) {
                counter++;
                break;
            }
        }
    }

    cout << counter << endl;

    return 1;
}
