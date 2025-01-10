//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

void transformation(char *text, int x, int i = 0) {
    if (text[i] == '\0') return;
    if (islower(text[i])) {
        if (text[i] + x > 'z') {
            text[i] = 'a' + ((text[i] + x - 1) - 'z');
        } else {
            text[i] += x;
        }
        transformation(text, x, i + 1);
    }else if (isupper(text[i])) {
        if (text[i] + x > 'Z') {
            text[i] = 'A' + ((text[i] + x - 1) - 'Z');
        } else {
            text[i] += x;
        }
        transformation(text, x, i + 1);
    }else {
        transformation(text, x, i + 1);
    }
}

int run19_Exercise() {
    int n, x;
    char text[600];
    cin >> n >> x;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cin.getline(text, 600);

        transformation(text, x);
        cout << text<<endl;
    }


    return 1;
}