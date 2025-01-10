#include <iostream>
using namespace std;

// EXERCISE 1

/*

int main() {
    float x = 3.0 / 2 + (5 - 46 * 5.0 / 12);
    cout << "x = " << x << endl;
    return 0;
}

*/

// EXERCISE 2

/*

int main () {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "number squared = " << number*number << endl;

    return 0;
}

*/

// BOTH WORK

/*

int main() {
    int x = 7;
    cout << "The square of " << x << " is " << x * x << endl;
    return 0;
}

*/

// EXERCISE 3

/*

int main() {

    float a = 5 ;
    float b = 7.5 ;
    float c = 10.2;
    float perimeter  = a+b+c;
    float d = perimeter / 2;
    float area = d * (d - a) * (d - b) * (d - c);
    cout << "Perimeter: "<<perimeter << endl;
    cout << "Area: "<<area << endl;

    return 0;
}
*/

// EXERCISE 4

/*

int main() {
    int a = 3.0;
    int b = 5.0;
    int c = 12.0;
    int sum = a + b + c;
    float avg = sum / 3.0;

    cout << "Arithmetic mean is: "<< avg << endl;

    return 0;
}

*/

// EXERCISE 5

/*

int main() {
    int mainNum = 19;
    int a = 2;
    int b = 3;
    int c = 5;
    int d = 8;

    cout << "Remainder of 19 and 2 is:"<<mainNum % a << endl;
    cout << "Remainder of 19 and 3 is:"<<mainNum % b << endl;
    cout << "Remainder of 19 and 5 is:"<<mainNum % c << endl;
    cout << "Remainder of 19 and 8 is:"<<mainNum % d << endl;

    return 0;
}

*/

// EXERCISE 6

/*

int main() {
    int number;
    float pi = 3.1415;
    cout << "Enter a number: ";
    cin >> number;

    cout <<"Perimeter of the circle: "<< 2.0 * pi * number << endl;
    cout <<"Area of the circle: "<<pi * number*number << endl;

    return 0;
}

*/

// EXERCISE 7

/*

int main() {
    int a;
    int b;

    cout << "Enter a numbers:a,b";
    cin>>a>>b;
    cout << "Sum of a and b is: " << a + b << endl;
    cout << "Difference of a and b is: " << a - b << endl;
    cout << "Product of a and b is: " << a * b << endl;
    cout << "Modulus of a and b is: " << a % b << endl;

    return 0;
}

*/

//EXERCISE 8

/*

int main() {
    char uppercaseLetter;
    cout << "Enter a letter in uppercase: ";
    cin >> uppercaseLetter;
    char lowercaseLetter = 32 + uppercaseLetter;
    cout << "The letter in lowercase is: " << lowercaseLetter;

    return 0;
}

*/

// EXERCISE 9

/*

int main() {
    float initialPrice;
    int VAT = 18;
    cout << "Enter initial price: ";
    cin >> initialPrice;
    float finalPrice = initialPrice + initialPrice * VAT / 100;
    cout << "Final price with VAT: " << finalPrice;

    return 0;
}

 */

// EXERCISE 10 (Austism)

/*

int main() {
    float priceOfProduct,interestRate,total,installment;
    int numberOfInstallments;
    cout << "Enter price: ";
    cin >> priceOfProduct;

    cout << "Enter number of installments: ";
    cin >> numberOfInstallments;

    cout << "Enter interest rate: ";
    cin >> interestRate;

    total = priceOfProduct * (1 + interestRate / 100);

    installment = total / numberOfInstallments;

    cout << "One installment is: " << installment << endl;
    cout << "Total price is: " << total << endl;

    return 0;
}

 */

// EXERSICE 11

/*

int main() {
    int number;
    cout << "Enter a 3 digit number: ";
    cin >> number;

    cout <<"Most significant digit is: "<< number / 100 <<endl;
    cout <<"Least significant digit is: "<< number % 10;
    return 0;

 */

// EXERCISE 12

/*

int main() {
    int date;
    cout << "Enter the date in format ddmmyyyy: ";
    cin >> date;

    int day = date / 1000000;
    int month = (date / 10000) % 100;

    cout << day << "." << month << endl;

    return 0;
}

*/



