//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run4_Exercise() {
    int matrix[100][100];
    int rows, columns, seprow, sepcol;
    int I = 0, II = 0, III = 0, IV = 0;

    cin >> rows >> columns;

    if ((rows >= 1 && rows < 100) && (columns >= 1 && columns < 100)) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cin >> matrix[i][j];
            }
        }
        cin >> seprow >> sepcol;

        for (int i = 0; i < seprow; i++) {
            for (int j = sepcol; j < columns; j++) {
                I += matrix[i][j];
            }
        }

        for (int i = 0; i < seprow; i++) {
            for (int j = 0; j < sepcol; j++) {
                II += matrix[i][j];
            }
        }

        for (int i = seprow; i < rows; i++) {
            for (int j = 0; j < sepcol; j++) {
                III += matrix[i][j];
            }
        }
        for (int i = seprow; i < rows; i++) {
            for (int j = sepcol; j < columns; j++) {
                IV += matrix[i][j];
            }
        }
    }

    cout << I << " "<< II << " "<< III << " " << IV;
    return 1;
}
