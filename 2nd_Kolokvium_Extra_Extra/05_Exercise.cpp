//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include <cmath>
#include<cstring>
using namespace std;

int run5_Exercise() {
    int rows, cols, matrix[100][100], counter = 2, sum = 0;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    while (counter <= min(cols, rows)) {
        sum = 0;
        for (int i = 0; i < counter; i++) {
            sum += matrix[i][0];
        }
        for (int i = 1; i < counter-1; i++) {
            sum+=matrix[i][i];
        }
        for (int i = 0; i < counter; i++) {
            sum+=matrix[i][counter-1];
        }
        cout<<sum<<endl;
        counter++;
    }
    return 1;
}
