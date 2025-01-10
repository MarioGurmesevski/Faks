//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int BrojPozitivni(int a[],int n,int i=0) {
    if (i==n) return 0;

    if (a[i]>0) return 1 + BrojPozitivni(a,n,i+1);
    return BrojPozitivni(a,n,i+1);
}

int run12_Exercise() {
    int array[100], n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>array[i];
    }
    cout<<BrojPozitivni(array,n);

    return 1;
}
