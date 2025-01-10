#include <iostream>
using namespace std;


/*

int main() {
    int from ,to;
    cin >> from >> to;
    for (int i=from; i<=to;i++) {
        int temp = i;
        int c1=0, c2=0,digit=0;
        while(temp!=0) {
            digit = temp%10;
            temp /= 10;
            if(digit==2 || digit == 4 || digit == 6 || digit == 8 || digit == 0) {
                c1++;
            }
            c2++;
        }
        if(c1==c2) {
            cout<<i;
            break;
        }
        if(i ==to) {
            cout << "NE";
        }
    }

    return 0;
}

*/

/*

int main() {
    int x;
    cin >> x;
    for (int i = x-1;; --i) {
        if (x < 9) {
            cout << "Brojot ne e validen";
            break;
        }
        int temp = i;
        int op = 0, count = 0;
        int digit = 0;
        while (temp > 0) {
            digit = temp % 10;
            op =op* 10 + digit;
            temp /= 10;
            count++;
        }
        if (op % count == 0) {
            cout << i;
            break;
        }
    }

    return 0;
}

*/


/*

 int main() {
    int x;
    int max = 0;
    cin >> x;
    int bigNumber= 0;

    for (int i = 1; i < x; i++) {
        int sum = 0;
        for (int j = 1; j <= i/2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (max < sum) {
            max = sum;
            bigNumber=i;
        }
    }
    cout << bigNumber;
}

*/


/*

int main() {
    int x, y;
    cin >> x >> y;
    int digitx, digity;
    if (x <= 0 || y <= 0) {
        cout << "Invalid input";
    } else {
        while (x > 0) {
            int digitx = (x % 100)/10;
            x /= 100;
            while (y > 0) {
                int digity = y % 10;
                y /= 100;

                if(digitx == digity) {
                    cout<<"PAREN";
                }else {
                   cout <<"NE";
                }
            }
        }
    }
}

*/


/*

int main() {
    int x, y;
    cin >> x >> y;
    int digitx = 0, digity = 0;
    if (x <= 0 || y <= 0) {
        cout << "Invalid input";

    } else {

        if(x<y) {
            swap(x,y);
        }
        while (x > 1) {
            digitx = digitx * 10 + (x % 100) / 10;
            x /= 100;
        }
        while (y > 0) {
            digity = digity * 10 + y % 10;
            y /= 10;
        }
        if (digitx == digity) {
            cout << "PAREN";
        } else {
            cout << "NE";
        }
    }
}

*/

/*

int main() {
    int z, a, b;
    float counter= 0;
    float totalPairs = 0;
    cin >>z;

    while (a!=0 || b!=0) {
        cin>> a>>b;
        if(a==0 && b == 0) {
            break;
        }
        if(a+b == z) {
            counter++;
        }
        totalPairs++;
    }

    cout << "Vnesovte " << counter<< " parovi od broevi chij zbir e " << z<<endl;
    cout << "Procentot na parovi so zbir " << z<< " e " << (counter/totalPairs)*100<<"%"<<endl;



    return 0;
}

*/

/*

 int main() {
    int n, x;
    cin >> n >> x;

    for (int i = n-1; i >= 0; i--) {
        int temp = i;
        int tempx = x;
        bool different = true;

        while (tempx != 0) {
            int digitX = tempx % 10;
            temp = i;

            while (temp != 0) {
                int digit = temp % 10;
                if (digit == digitX) {
                    different = false;
                    break;
                }
                temp /= 10;
            }
            tempx /= 10;
        }
        if(different) {
            cout << i;
            break;
        }
    }
    return 0;
}

*/

/*

int main() {
    int num;

    while (cin >> num) {
        bool zigZagTypeS = true;
        if (num < 10) { continue; }
        int temp = num;

        int lastDigit = temp % 10;
        temp /= 10;
        int currentDigit = temp % 10;
        temp /= 10;

        bool isItIncreasing = currentDigit > lastDigit;

        if (currentDigit == lastDigit) {
            zigZagTypeS = false;
        }

        while (temp > 0) {
            lastDigit = currentDigit;
            currentDigit = temp % 10;
            temp /= 10;

            if ((isItIncreasing & currentDigit >= lastDigit) || (!isItIncreasing & currentDigit <= lastDigit)) {
                zigZagTypeS = false;
                break;
            }
            isItIncreasing = !isItIncreasing;
        }


        if (zigZagTypeS == true) {
            cout << num << endl;
        }
    }
}

*/


