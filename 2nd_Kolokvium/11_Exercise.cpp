//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run11_Exercise() {
    char text[600];
    int array[100];
    int counter = 0;
    while (cin.getline(text, 600)) {
        if (strcmp(text, "#") == 0) {
            break;
        }
        for (int i = 0; i < strlen(text); i++) {
            if (isdigit(text[i])) {
                array[counter] = text[i] - '0';
                counter++;
            }
        }

        for (int i = 0; i < counter - 1; i++) {
            for (int j = 0; j < counter - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        cout << counter << ":";
        for (int i = 0; i < counter; i++) {
            cout << array[i];
        }
        cout << endl;
        counter = 0;
    }
    return 1;
}
