#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;
    int b=0;
    ptr = &b;

    cout << a;
cout << "\n";

    cout << &a;
cout << "\n";

    cout << ptr;
cout << "\n";  

    cout << &ptr;
cout << "\n";

    cout << *ptr;
cout << "\n";

    *ptr = 45;

    cout << a;
cout << "\n";

    cout << *ptr;
}