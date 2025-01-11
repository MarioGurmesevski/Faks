//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;
void findUpper(char *text,int i=0) {
    if(i==strlen(text)) {
        cout<<"Nema";
        return;
    }
    if (!isupper(text[i])) {
        findUpper(text,i+1);
    }else {
        cout<<text[i];
    }
}

int run12_Exercise() {
    char text[100];
    cin.getline(text, 100);

    findUpper(text);
    return 1;
}
