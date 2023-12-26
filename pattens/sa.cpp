#include <iostream>

using namespace std;

int main(){

int x,i,m,n;

cin >> x;

    for(i=0;i<=x;i++){
        for(m=x;m>=i;m--){
            cout << "  ";
        }

        for(n=1;n<i*2;n++){
            cout << "* ";
        }

        cout << "\n";

    }

}
