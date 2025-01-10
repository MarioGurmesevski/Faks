//
// Created by mario on 11/15/2024.
//

#include <iostream>
using namespace std;

int checkDividers(int x) {
    int max = 0;
    int biggestNum=0;
    for(int i = 1;i<x;i++) {
        int sum = 0;
        for(int j = 1;j<=i/2;j++) {
            if(i%j==0) {
                sum+=j;
            }
        }
        if(max<sum) {
            max=sum;
            biggestNum = i;
        }
    }
    return biggestNum;
}


int run3_Exercise() {
    int x;
    cin >> x;
    cout << checkDividers(x);
    return 0;
}
