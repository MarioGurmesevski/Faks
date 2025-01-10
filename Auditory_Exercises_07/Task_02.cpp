//
// Created by mario on 11/25/2024.
//

#include <iostream>
using namespace std;


int runTask_02() {
    int num, i =0,totalOdd=0,totalEven=0,sumOdd=0,sumEven=0;
    cin >>num;

    int array[num];

    for(i=0;i<num;i++) {
        cin>>array[i];
    }

    for(i=0;i<num;i++) {
        if(array[i]%2==0) {
            totalEven++;
            sumEven+=array[i];
        } else {
            totalOdd++;
            sumOdd+=array[i];
        }
    }

    cout<<"Sum even:"<<sumEven<<endl;
    cout<<"Sum odd:"<<sumOdd<<endl;

    if(totalEven>totalOdd) {
        cout <<"Rel:"<<(float)totalEven/totalOdd<<endl;
    }else {
        cout<< "Rel:"<<(float)totalOdd/totalEven<<endl;
    }



    return 0;
}
