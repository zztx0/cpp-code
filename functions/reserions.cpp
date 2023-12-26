#include <iostream>
using namespace std;

int fact(int &n){

    int factt = 1;

    for(int i=1;i<=n;i++){

        factt = factt * i;
    }
    cout << factt;
}

int main(){

int x;
cin >> x;
fact(x);

}