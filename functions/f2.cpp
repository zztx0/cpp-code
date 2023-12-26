#include <iostream>
using namespace std;

int swap(int &x,int &y){

    x = x - y;
    y = x + y;
    x = y - x;

}

int main(){

int a,b;
cin >> a >> b;

swap(a,b);

cout << "1st" << a << endl;
cout << "2nd" << b;

}
