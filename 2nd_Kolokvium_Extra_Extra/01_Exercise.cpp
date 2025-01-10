//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int checkHowMuchRepeat(char *text, char *check) {
	int count = 0;
	int textlen = strlen(text);
	int checklen = strlen(check);

	for (int i = 0; i < textlen; i++) {
		bool found = true;
		for (int j = 0; j < checklen; j++) {
			if (text[i + j] != check[j]) {
				found = false;
				break;
			}
		}
		if (found) count++;
	}
	return count;
}


int run1_Exercise() {
	char check[20], text[100];
	cin.getline(check, 20);
	int n;
	cin >> n;
	int max = 0;

	for (int i = 0; i < n; i++) {
		cin.getline(text, 100);
		int occurence = checkHowMuchRepeat(text, check);

		if (occurence > max) max = occurence;
	}

	for (int i = 0; i <= max; i++) {
		int count = 0;
		for (int j=0;j<n;j++) {
			int occurence = checkHowMuchRepeat(text, check);
			if (occurence == i) count++;
		}

		cout << i << ": " << count << endl;
	}
	return 1;
}
