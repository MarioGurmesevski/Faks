//
// Created by mario on 11/25/2024.
//

#include <iostream>
using namespace std;

//strictly increasing  a<b<c<d<e...
// strictly decreasing a>b>c>d>e..
// neither             a>b<c>d>e...

int runTask_04() {
    int num,i=0,counter1=0,counter2=0;
    cin>> num;

    int array[num];

    for(i=0;i<num;i++) {
        cin >> array[i];
    }
    int temp = array[0];

    for(i=1;i<num;i++) {
        if(temp<array[i]) {
            counter1++;
        }else if(temp>array[i]) {
            counter2++;
        }
        temp=array[i];
    }
    if (counter1==num-1) {
        cout <<"Strictly increasing";
    }else if (counter2==num-1) {
        cout <<"Strictly decreasing";
    }else {
        cout << "Neither";
    }

    return 0;
}
