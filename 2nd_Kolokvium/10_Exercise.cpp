//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run10_Exercise() {
    char z1, z2;
    char text[600];

    cin >> z1 >> z2;
    cin.ignore();

    while (cin.getline(text, 600)) {
        if (strcmp(text, "#") == 0) {
            break;
        }

        bool between = false;

        for (int i = 0; i < strlen(text); i++) {
            if (text[i] == z1) {
                between = true;
                continue;
            }
            if (text[i] == z2) {
                between = false;
                break;
            }

            if (between) {
                cout << text[i];
            }
        }
        cout << endl;
    }


    return 1;
}
