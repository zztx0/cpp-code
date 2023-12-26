#include <iostream>

using namespace std;

int main(){
    int i,m,k,x;
    cin >> x;

    for(i=1;i<=x;i++){
        for(m=x;m>=i;m-- ){
            cout << " ";
        }
        for(k=1;k<=i;k++){
            cout << "* ";
        }
        cout << "\n";
    }

}