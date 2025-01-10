//
// Created by mario on 12/15/2024.
//
#include <iostream>
using namespace std;

int runTask_1() {
    int column, row,columnSum=0,rowSum=0;
    cin >> row >> column;
    int a[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >>a[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (i%2==0) {
                rowSum+=a[i][j];
            }
            if (j%2!=0) {
                columnSum+=a[i][j];
            }
        }
    }

    cout<< columnSum - rowSum;



    return 0;
}
