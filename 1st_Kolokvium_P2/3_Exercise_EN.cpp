//
// Created by mario on 11/15/2024.
//

#include <iostream>
using namespace std;

int square(int x) {
    int counter= 1;
    char plus = '+';
    char minus = '-';
    while (counter<=x) {
        if(counter==1 || counter ==x) {
            for(int i =1;i<=x;i++) cout<<plus;
        }else {
            cout<<plus;
            for(int j=2;j<x;j++) cout<<minus;
        cout<<plus;
        }
        cout<<endl;
        counter++;
    }
}


int run3_Exercise_EN() {
    int x;
    cin >> x;
    cout << square(x);
    return 0;
}
