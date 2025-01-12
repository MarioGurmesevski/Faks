//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run8_Exercise() {
    int n;
    char textMatrix[50][50];
    char word[10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> textMatrix[i][j];
        }
    }

    cin>>word;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (textMatrix[i][j] == word[j]) {

            }
        }
    }
    return 1;
}
