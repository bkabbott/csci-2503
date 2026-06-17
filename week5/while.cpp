#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sum = 1, keepGoing = 1;

    while (keepGoing) {
        cout << sum << endl;
        sum += sum;

        if (sum > 128) {
            keepGoing = 0;
        }
    }

    cout << "Outside of loop" << endl;
    return 0;
}