#include <iostream>

using namespace std;

int main(){
    int i,x,k=0;
    cin >> x;
    for(i=0;i<=x;i++){
        if(i%2==0){
            cout << i<<"\n";
            k=k+i;
        }
    }
    cout << "Sum  " << k;
}