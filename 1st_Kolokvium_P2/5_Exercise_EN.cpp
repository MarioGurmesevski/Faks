//
// Created by mario on 11/15/2024.
//

#include <cmath>
#include <iostream>
using namespace std;

string randomFunc(int n1, int n2) {
    int lastDigit = n1%10;
    n1/=10;
    int counter= 0;
    int temp=n1;

    while(temp !=0) {
        counter++;
        temp/=10;
    }

    int transformedN1 = lastDigit* pow(10,counter)+n1;

    if(transformedN1>n2)return "YES";
    return "NO";
}


int run12_Exercise_EN() {
    int x;
    int n1, n2;
    cin >> x;

    for (int i = 0; i < x; i++) {
        cin >> n1 >> n2;
        cout << randomFunc(n1, n2)<<endl;
    }

    return 0;
}
