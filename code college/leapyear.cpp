#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0) {
        cout << "It's a leap year!";
    } else {
        cout << "It's not a leap year!";
    }

    return 0;
}