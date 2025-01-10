//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run3_Exercise() {
    int n;
    char text[50];
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cin.getline(text, 50);

        for (int j = 0; j < strlen(text); j++) {
            text[j] = tolower(text[j]);
        }

            int counter = 0;
        for(int j = 0; j <= strlen(text); j++) {
            if (text[j] == 'a' && text[j + 1] == '1' && text[j + 2] == 'c') {
                counter++;
            }
        }
        if (counter >= 2) {
            cout << text << endl;
        }
    }

    return 1;
}
