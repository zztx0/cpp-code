#include <iostream>

using namespace std;

int main(){

    int x,i,m,n,k,p,q;

    cin >> x;

    for(q=1;q<=x;q++){
        for(p=x+1;p>=q;p-- ){
            cout << " ";
        }
        for(k=1;k<=q;k++){
            cout << "* ";
        }
        cout << "\n";
    }

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