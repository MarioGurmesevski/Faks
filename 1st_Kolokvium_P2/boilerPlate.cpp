//
// Created by mario on 11/15/2024.
//

#include <iostream>
using namespace std;

int funcName(int x) {

}


int runNUM_Exercise() {
    int x;
    cin >> x;
    if (funcName(x) == 0)
        cout << "Brojot ne e validen";
    else {
        cout << funcName(x) << endl;
    }
    cout << funcName(x);
    return 0;
}
