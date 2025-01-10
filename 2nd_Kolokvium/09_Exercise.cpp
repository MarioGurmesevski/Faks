//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

float recursive_divider(int a[],int n,int i) {
    if (i==n-1) return a[i];

    return a[i]+1/recursive_divider(a,n,i+1);
}

int run9_Exercise() {

    int n,array[100];
    cin>>n;

    for(int i=0;i<n;i++) {
        cin>>array[i];
    }

    cout<<recursive_divider(array,n,0);


    return 1;
}
