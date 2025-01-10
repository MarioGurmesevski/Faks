//
// Created by mario on 11/25/2024.
//

#include <iostream>
using namespace std;

int runTask_05() {
    int num,i=0;
    cin>> num;

    int array[num];
    int rotatedArray[num];

    for(i=0;i<num;i++) {
        cin >> array[i];
    }
    rotatedArray[0]=array[num-1];

    for(i=1;i<num;i++) {
        rotatedArray[i]=array[i-1];
    }

    for(i=0;i<num;i++) {
        cout<<rotatedArray[i]<<" ";
    }

    return 0;
}
