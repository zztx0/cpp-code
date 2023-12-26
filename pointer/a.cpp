#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int b = 10;
    int *ptr = &a;
    int **ptr0 = &ptr;

    cout << a << "\n";

    cout << *ptr << "\n";

    cout << **ptr0 << "\n";
    
    *ptr = 45;

    cout << a << "\n";

    cout << *ptr << "\n";

    cout << **ptr0 << "\n";

    *ptr0 = &b;

    cout << a << "\n";

    cout << *ptr << "\n";

    cout << **ptr0 << "\n";

}
