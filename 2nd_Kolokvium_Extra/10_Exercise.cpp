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

    for (int j = 0; j < cols; j++) {
        int counter = 0;
        for (int i = 0; i < rows; i++) {
            int index_number =i;
            if (j >= 100) {
                index_number *= 1000;
            }else if (j >= 10){
                index_number *= 100;
            }else {
                index_number *= 10;
            }
            index_number+=j;
                if (matrix[i][j] == index_number) {
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 1;
}
