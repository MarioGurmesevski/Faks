//
// Created by mario on 12/15/2024.
//
#include <iostream>
using namespace std;

void count_down(int n) {
    if (n==0) {
        cout<< 0<< " ";
        return;
    }
    cout << n<<" ";
    count_down(n-1);

}

void count_up(int n) {
    if (n==0) {
        cout<< 0<< " ";
        return;
    }
    count_up(n-1);
    cout << n<<" ";

}

int runTask_02() {
    int n;
    cin >>n;
    count_up(n);
    return 0;
}
