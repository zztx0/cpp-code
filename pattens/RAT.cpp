#include <iostream>

using namespace std;

int main(){
    int i,k,x;

    cin >> x;

    for(i=0;i<=x;i++){
        for(k=1;k<=i;k++){
            cout << " * " ;
        }
        cout << "\n";
    }
}