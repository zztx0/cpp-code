#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int b = 10;
    int &refA = a;

int arr[refA]={1,2,4,3,5};
b = refA - 1;
    cout << a << endl;
    cout << refA;
    cout << b;


}