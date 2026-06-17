//
// Created by brian on 6/17/26.
//

#include <iostream>
#include "functions.h"
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    int a = 3, b = 5;
    int result;

    result = add(a, b);
    cout << result << endl;

    return 0;
}