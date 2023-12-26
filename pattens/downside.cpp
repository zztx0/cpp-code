#include <iostream>

using namespace std;

int main(){

    int x,i,m,n;

    cin >> x;

    for(i=0;i<=x;i++){
        for(m=0;m<=i;m++){
            cout << " ";
        }
        for(n=x;n>=i;n--){
            cout << "* ";
        }
        cout << "\n";
    }

}                                                                                                               