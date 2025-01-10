//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run1_Exercise() {
    int n, palCounter = 0;
    char biggestPalChar[80], text[80];
    cin >> n;
    cin.ignore();

    int pal=0;

    for (int i = 0; i < n; i++) {
        cin.getline(text, 80);
        bool isPal = true;
        bool hasSpecialCharacter = false;
        int counter = strlen(text);

        for (int j = 0; j < counter / 2; j++) {
            if (text[j] != text[counter - 1 - j]) {
                isPal = false;
                break;
            }
        }
        if (counter % 2 != 0) {
            for (int j = 0; j < counter; j++) {
                if (!isalpha(text[j]) && !isdigit(text[j])) {
                    hasSpecialCharacter = true;
                }
            }
            if (isPal && palCounter < counter && hasSpecialCharacter) {
                pal =1;
                palCounter = counter;
                strcpy(biggestPalChar, text);
            }
        }
    }
    if (pal==1) {
        for (int i = 0; i < strlen(biggestPalChar); i++) {
            cout << biggestPalChar[i];
        }
    } else {
        cout << "Nema!";
    }
    return 1;
}
