//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

void tranformation(int *a, int n) {
    for (int i = 0; i < n; i++) {
        *(a + i) -=1;
    }
}

int run11_Exercise() {
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int n;
        cin >> n;
        int a[100];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        int numberOfMoves = a[0];
        if (a[0] > 0) {
            for (int j = 0; j < numberOfMoves; j++) {
                tranformation(a, n);
            }
        }
        for (int j =0; j < n; j++) {
            cout << a[j]<< " ";
        }
        cout << endl;
    }
    return 1;
}
