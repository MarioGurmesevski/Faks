#include <iostream>
#include <cmath>
using namespace std;

// EXERCISE 1

/*

int main() {
    int i=10,sum=0;

    for(; i<=98;i+=2) {
        (sum=sum+i);
    }
    cout<<sum;

    return 0;
}

*/

// EXERCISE 2

/*

int main() {
    int i=11,sum=0;

    for(; i<100;i+=2) {
        (sum=sum+i);
    }
    cout<<sum;

    return 0;
}

*/

// EXERCISE 3

/*

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    float x,y;
    cout << "Enter x: ";
    cin >> x;

    y=pow(x,n);
    cout<<x<<"^"<<n<<"="<<y;

    return 0;
}

*/

// EXERCISE 4 (i dont know)

// Auditory Page 5

// EXERCISE 6

/*

int main() {
    int from, to,temp,number,rb;
    cout << "Enter 2 numbers that will significant from and to: ";
    cin >> from >> to;
    for(int i = from; i <= to; i++) {
    temp = i;
        rb=  0;
        while(temp > 0) {
            number = temp % 10;
            rb = rb *10 + number;
            temp /= 10;
        }
        if (rb == i) {
            cout <<i<<endl;
        }
    }

}

*/

