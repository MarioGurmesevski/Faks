//
// Created by mario on 11/25/2024.
//

#include<iostream>
using namespace std;

int runTest() {
    int a[100], n, j, k, deleted = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n - deleted; i++) {
        for (int j = i + 1; j < n - deleted; j++) {
            if (a[i] == a[j]) {
                for (int k = j; k < n - 1 - deleted; k++) {
                    a[k] = a[k + 1];
                }
                deleted++;
                --j;
            }
        }
    }

    n -= deleted;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}