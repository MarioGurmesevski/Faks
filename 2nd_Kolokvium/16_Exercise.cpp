//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include <chrono>
#include<cstring>
using namespace std;

int findMaxDigit(int n) {
    if (n==0) return 0;
    int lastDigit = n%10;
    int rest = findMaxDigit(lastDigit/10);

    if (lastDigit>rest) return lastDigit;
    return rest;
}

int run16_Exercise() {
    int n;
    while (cin>>n) {
        cout<<findMaxDigit(n)<<endl;
    }


    return 1;
}
