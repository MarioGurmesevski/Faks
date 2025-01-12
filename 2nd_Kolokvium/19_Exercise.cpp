//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

/*
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
*/

void transformation(char *text, int x, int i = 0, int j = 0) {
    if (text[i] == '\0')return;
    if (x == j) {
        transformation(text, x, i + 1, 0);
    } else {
        if (isalpha(text[i])) {
            if (text[i] == 'z') {
                text[i] = 'a';
                transformation(text, x, i, j + 1);
            }else if (text[i] == 'Z') {
                text[i] = 'A';
                transformation(text, x, i, j + 1);
            } else {
                text[i] += 1;
                transformation(text, x, i, j + 1);
            }
        }else {
            transformation(text, x, i+1, j);
        }
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
        cout << text << endl;
    }


    return 1;
}
