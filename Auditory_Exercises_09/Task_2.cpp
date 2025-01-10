//
// Created by mario on 12/15/2024.
//
#include <iostream>
using namespace std;

int runTask_2() {
    int m, max = 0, min = 9999, differance=0;
    cin >> m;
    int a[m][m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (min > a[i][j]) min = a[i][j];
            if (max < a[i][j]) max = a[i][j];
        }
    }

    differance = max-min;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i==j) a[i][j]=differance;


        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout<< a[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}
