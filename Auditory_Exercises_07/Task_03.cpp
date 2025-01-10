//
// Created by mario on 11/25/2024.
//

#include <iostream>
using namespace std;


int runTask_03() {
    int num,i=0,scalar=0;
    cin>> num;

    int a[num],b[num];

    for(i=0;i<num;i++) {

        cin >> a[i];
    }
    for(i=0;i<num;i++) {
        cin >> b[i];
    }

    for(i=0;i<num;i++) {
        scalar +=a[i]*b[i];
    }

    cout << scalar;


    return 0;
}
