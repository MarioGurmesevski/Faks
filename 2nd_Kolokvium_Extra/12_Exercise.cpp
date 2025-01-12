//
// Created by mario on 1/4/2025.
//

#include <iostream>
#include <cctype>
#include<cstring>
using namespace std;


int run12_Exercise() {
    int matrix[100][100],rows,cols;
    cin>>rows>>cols;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<rows;i++) {
        int count=0;
        for(int j=0;j<cols;j++) {
            if ((i+j)%2==0 && matrix[i][j]%2==0) {
                count++;
            }
            if ((i+j)%2!=0 && matrix[i][j]%2!=0) {
                count++;
            }
        }
        cout<<i<<": "<<count<<endl;
    }
    return 1;
}
