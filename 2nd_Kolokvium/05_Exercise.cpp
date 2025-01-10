//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;

int run5_Exercise() {
    char code[100];
    int money;
    cin>>money;

    int maxtip=0;
    float sum=1;
    float maxkoef=0;
    char maxcode[100];
    while (cin >> code) {
        if(strcmp(code,"#")==0) {
            break;
        }
        int tip;
        float koef;
        cin>>tip;
        cin>>koef;
        sum*=koef;
        if(koef>maxkoef) {
            maxkoef=koef;
            maxtip=tip;
            strcpy(maxcode,code);
        }
    }
    float gain=sum * money;
    cout<<maxcode<<" "<<maxtip<<" "<<maxkoef<<endl;
    cout<<gain<<endl;
}

