#include <iostream>

using namespace std;

int main(){
    int x,i,k,p,q;

    cin >> x;

    for(i=0;i<=x;i++){
        for(k=x;k>=i;k--){
            cout << " ";
        }   
        for(p=1;p<=i;p++){
                cout << "*";
            }
            cout << "\n";
    }
}
