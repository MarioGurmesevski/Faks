//
// Created by mario on 11/12/2024.
//
#include <iostream>
using namespace std;

int summation(int num){
    int sum = 0;
    for(;num!=0;num--) {
        sum+=num;
    }

    return sum;
}
int runCodeWarsP2() {
    int num;
    cin >> num;
    cout << summation(num) << endl;

    return 0;
}