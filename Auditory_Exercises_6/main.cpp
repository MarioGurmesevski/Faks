#include <iostream>
#include <cmath>
using namespace std;

// EXERCISE 1

/*

#define PI 3.1415;


float diametar(int r) {
    return 2*r;
}

float perimetar (float r) {
    return 2 * r * PI  ;
}

float area (float r) {
    return r * r * PI;
}

int main() {
    float r;
    cin >> r;

    cout << diametar(r) << " Diametar"<<endl;
    cout << perimetar(r) << " Petimetar"<<endl;
    cout << area (r) << " Area"<<endl;


    return 0;
}

*/

//EXERCISE 2

/*

int sumOfBothNumbers (int num) {
    return num%100 + num/100;
}


int main() {

    int num = 1000;
    int count = 0;

    for(;num<10000;num++) {
        if(num%sumOfBothNumbers(num)==0) {
            cout << num<<endl;
            count++;
        }
    }
        cout<<"Total num is: "<< count;

    return 0;
}

*/

// EXERCISE 3

/*

    int isNumAPrimeNum(int num) {
        for(int i =2 ;i*i<=num;i++) {
            if(num%i==0) {
                return 0;
            }
        }
        return 1;
    }

int firstLargerPrime(int n) {
        for (n = n + 1; !isNumAPrimeNum(n); n++) {
        }
        return n;
    }


int main() {

        int n;
        cin >>n;

        int largerPrimeNum = firstLargerPrime(n);
        cout<< largerPrimeNum<< " " <<largerPrimeNum - n;

    return 0;
}

*/

//EXERCISE 4

/*

int isNumAPrimeNum(int num) {

    for(int i = 2;i*i<=num;i++) {
        if(num%i==0) {
        return 0;
        }
    }
        return 1;

}

int sumOfDigits(int num) {
    int sum = 0;
    while(num!=0) {
        sum+=num%10;
        num/=10;

    }
    return sum;
}


int main() {

    int counter=0;

    for (int num = 2; num < 10000; num++) {

    if(isNumAPrimeNum(num)==1 && isNumAPrimeNum(sumOfDigits(num))==1) {
        cout<< num<< endl;
        counter++;
    }
    }

    cout<< "Total numbers:"<< counter;

    return 0;
}

*/












