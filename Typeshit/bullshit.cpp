#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

bool isPalindrome(const char *text, int start, int end) {
    while (start < end) {
        if (tolower(text[start]) != tolower(text[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    int number;
    cin >> number;
    cin.ignore();

    for (int i = 0; i < number; i++) {
        char text[300];
        cin.getline(text, 300);

        int palindromeCount = 0;
        int start = -1;
        cout << text << ": ";

        int length = strlen(text);

        for (int j = 0; j < length; j++) {
            if (isalpha(text[j])) {
                if (start == -1) {
                    start = j;
                }
            } else {
                if (start != -1) {
                    if (isPalindrome(text, start, j - 1)) {
                        palindromeCount++;
                    }
                    start = -1;
                }
            }
        }
        if (start != -1) {
            if (isPalindrome(text, start, length - 1)) {
                palindromeCount++;
            }
        }
        cout << palindromeCount << endl;
    }

    return 0;
}
