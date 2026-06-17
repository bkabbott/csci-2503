//
// Created by brian on 6/17/26.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int value = 0, keepGoing = 1;

    do {
        value = pow(2, value);
        cout << value << endl;

        if (value >= 65536) {
            keepGoing = 0;
        }
    } while (keepGoing);

    cout << "Outside of loop" << endl;
    return 0;
}