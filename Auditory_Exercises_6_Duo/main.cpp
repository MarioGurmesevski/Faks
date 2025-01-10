#include <iostream>
#include <cmath>
using namespace std;

int factorial(int x) {
    int sum=1;
    for(int i=1 ;i<=x; i++) {
        sum *= i;
    }
        return sum;
}

int total(int x) {
    int sum = 0;
    for(int i=1;i<=x;i++) {
        sum+=i;
    }
    return sum;
}


int main() {
    int x;
    cin >> x;
    int sum = 0;

    for(int i = 1;i<=x;i++) {
        sum+=factorial(total(i));
    }
    cout<<sum;
}