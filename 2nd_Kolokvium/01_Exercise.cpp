//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run1_Exercise() {
    char text[600];
    int counter = 0;

    while (cin.getline(text, 600)) {
        if (strcmp(text, "#")==0) {
            break;
        }

        if (strlen(text)==0) {
            continue;
        }

        for (int i = 0; i < strlen(text); i++) {
            text[i] = tolower(text[i]);
        }
        for (int i = 0; i < strlen(text) - 1; i++) {
            if ((text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') && (text[i + 1] ==
                'a' || text[i + 1] == 'e' || text[i + 1] == 'i' || text[i + 1] == 'o' || text[i + 1] == 'u')) {
                cout << text[i] << text[i + 1] << endl;
                counter++;
            }
        }
    }

    cout << counter;

    return 0;
}
