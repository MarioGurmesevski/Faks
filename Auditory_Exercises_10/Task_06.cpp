//
// Created by mario on 12/15/2024.
//
#include <iostream>
using namespace std;

int GCD1(int m,int n) {
    if (!n) {
        return m;
    }

    return GCD1(n,m%n);
}

int runTask_06() {
    int n,a[100];

    cin>>n;

    for (int i=0;i<n;i++) {
        cin>>a[i];
    }

    int gcd = GCD1(a[0],a[1]);
    for (int i=2;i<n;i++) {
        gcd=GCD1(gcd,a[i]);
    }

    cout<<gcd;



}
