//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;
void findPunct(char *text,int i=0) {
    if(i==strlen(text)) {
        cout<<"Nema";
        return;
    }
    if (!ispunct(text[i])) {
        findPunct(text,i+1);
    }else {
        cout<<text[i];
    }
}

int run9_Exercise() {
    char text[100];
    cin.getline(text, 100);

    findPunct(text);
    return 1;
}
