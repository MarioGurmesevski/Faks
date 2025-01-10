//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cmath>
#include<cstring>
using namespace std;

int run7_Exercise() {
    int martix[100][100];
    float rows, columns;
    cin >> rows >> columns;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> martix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        float sum = 0;
        for (int j = 0; j < columns; j++) {
            sum += martix[i][j];
        }
        float average = sum /= columns;

        float biggestDifferenceNum = martix[i][0];
        float biggestDifference = abs(martix[i][0] - average);

        for (int j = 1; j < columns; j++) {
            if (abs(martix[i][j] - average) > biggestDifference) {
                biggestDifferenceNum = martix[i][j];
                biggestDifference = abs(martix[i][j] - average);
            }
        }


        cout << biggestDifferenceNum << " ";
        sum = 0;
    }
    return 1;
}
