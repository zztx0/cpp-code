#include <iostream>
using namespace std;

int fact(const int &n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * fact(n - 1);
    }
}

int main() {
    int x;
    cout << "Enter a non-negative integer: ";
    cin >> x;

    // Call the recursive function to calculate factorial and print the result
    cout << "Factorial of " << x << " is: " << fact(x) << endl;

    return 0;
}
