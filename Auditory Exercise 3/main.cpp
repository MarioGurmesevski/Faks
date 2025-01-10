#include <chrono>
#include <iostream>
using namespace std;

// EXERCISE 1

/*

int main() {
    char letter;
    cout << "Enter a lowercase or uppercase letter: ";
    cin >> letter;
    if (letter >= 'a' && letter <= 'z') {
        cout << "1";
    }
    else if (letter >= 'A' && letter <= 'Z') {
        cout << "0";
    }
    else {
        cout <<"Error";
    }

    return 0;
}

*/

// EXERCISE 2

/*

int main() {
    float x,y;
    cout<<"Enter x,y:";
    cin>>x>>y;
    if(x>=0 && y>=0) {
        cout<<"Your in the first quadrant";
    }else if(x<=0 && y>=0) {
        cout<<"Your in the second quadrant";
    }else if(x<=0 && y<=0) {
        cout<<"Your in the third quadrant";
    }
    else if(x>=0 && y<=0) {
        cout<<"Your in the fourth quadrant";
    }else {
        cout<<"Error";
    }

    return 0;
}

*/

// EXERCISE 3

/*

int main(){
    float points;
    cout<<"Enter number of points: ";
    cin>>points;
    if(points>=0 && points<=50) {
       cout<<"Your grade is 5";
    }else if(points>50 && points <=60) {
        cout<<"Your grade is 6";
    }else if(points>60 && points<=70) {
        cout<<"Your grade is 7";
    }else if(points>70 && points<=80) {
        cout<<"Your grade is 8";
    }else if(points>80 && points<=90) {
        cout<<"Your grade is 9";
    }else if(points>90 && points<=100) {
        cout<<"Your grade is 10";
    }else {
        cout<<"Your points are invalid";
    }

    return 0;
}

*/

// EXERCISE 4

/*

int main(){
    int points;
    cout<<"Enter number of points: ";
    cin>>points;
    if(points>=0 && points<=50) {
        cout<<"Your grade is 5";
    }else if(points>50 && points <=60) {
        cout<<"Your grade is 6";
    }else if(points>60 && points<=70) {
        cout<<"Your grade is 7";
    }else if(points>70 && points<=80) {
        cout<<"Your grade is 8";
    }else if(points>80 && points<=90) {
        cout<<"Your grade is 9";
    }else if(points>90 && points<=100) {
        cout<<"Your grade is 10";
    }else {
        cout<<"Your points are invalid";
    }

    int lastDigit = points%10;
    if(lastDigit >= 1 && lastDigit <= 3) {
        cout<<"-";
    } else if (lastDigit >= 8 || lastDigit == 0) {
        cout << "+";
    }
    return 0;
}

*/

// EXERCISE 5 (me mrzi)



// EXERCISE 6 (me mrzi p2)



// EXERCISE 7

/*

int main() {
    int dogAge;
    cout << "Enter your dog's age: ";
    cin >> dogAge;

    if (dogAge<0) {
        cout << "You do not have a negative age.";
    }else {
        if (dogAge<=2) {
            cout << dogAge*10.5 << " years old";
        }else {
            cout << 2*10.5+(dogAge-2)*4<< " years old";
        }
    }
    return 0;
}

*/

// EXERCISE 8

/*

int main() {
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    if (a > b)
        cout << "Max: " << a;
    else
        cout << "Max: " << b;
    return 0;
}

*/

// EXERCISE 9

/*

int main() {
    int year;
    cout << "Please enter a year: ";
    cin >> year;
    if (year % 4 == 0 && year % 100 !=0 || year % 400 == 0) {
        cout << "Your year is a leap year";
    }else {
        cout << "Your year isn't a leap year";
    }
}

*/









