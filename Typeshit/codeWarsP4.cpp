//
// Created by mario on 11/12/2024.
//

#include <iostream>
#include <cmath>
using namespace std;

class DigPow
{
public:
    static int digPow(int n, int p) {
        int counter = 0;
        int sum = 0;
        int temp = n;
        while(temp !=0) {
            temp/=10;
            counter++;
        }
        int counterDup = counter;
        temp=n;
        for(int i = 0;i<counter;i++) {
            int divider = pow(10,counterDup-1);

            int digit = temp /divider;

            sum += pow(digit,p);

            p++;
            counterDup--;
            temp%=divider;
        }
        if(sum%n==0) {
            return sum/n;
        }
        return -1;
    }
};


int runCodeWarsP4() {
    int n, p;
    cin >> n >> p;
    cout << DigPow::digPow(n, p) << endl;

    return 0;
}
