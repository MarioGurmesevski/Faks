//
// Created by mario on 11/12/2024.
//

#include <iostream>
using namespace std;

int get_sum(int a, int b)
{
    int sum=0;
    if(a==b)return a;
    if(a<b){
        for(int i=a;i<=b;i++){
            sum+=i;
        }
    }
    if(a>b){
        for (int j=b;j<=a;j++){
            sum+=j;
        }
    }
            return sum;
}
int runCodeWarsP5() {
    int a,b;
    cin >> a>>b;
    cout << get_sum(a,b) << endl;

    return 0;
}