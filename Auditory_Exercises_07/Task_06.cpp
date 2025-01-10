//
// Created by mario on 11/25/2024.
//

#include <iostream>
using namespace std;

int runTask_06() {
    int num, i = 0, m;
    cout << "Size of  array";
    cin >> num;
    cout << "Elements move to the right";
    cin >> m;

    int array[num];
    int rotatedArray[num];

    for (i = 0; i < num; i++) {
        cin >> array[i];
    }

    for (i = 0; i < m; i++) {
        rotatedArray[i] = array[num - m + i];
    }
    for (i = 0; i < num - m; i++) {
        rotatedArray[m + i] = array[i];
    }

    for (i = 0; i < num; i++) {
        cout << rotatedArray[i] << " ";
    }
    return 0;
}
