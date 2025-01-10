//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cmath>
#include<cstring>
using namespace std;

void premesti(int *a, int n) {
    int counter = n-1;
    for (int i = n-1; i >=0;i--) {
        if (a[i] < 0) {
            int temp = a[i];
            for (int j = i; j < counter; j++) {
                a[j] = a[j + 1];
            }
            a[counter] = temp;
            counter--;
        }
    }
}

int run7_Exercise() {
    int n, array[100];
    cin >> n;
    if (n <= 100) {
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        premesti(array, n);

        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }
    }


    return 1;
}
