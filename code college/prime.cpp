#include <iostream>

using namespace std;

int main(){
    int  i,x,count=0;
    cin >> x;
    for(i=1;i<=x;i++){
        if(x%i==0){
        count++;
        } 
    }
    if(count==2 ){
        cout << "Prime";
    }
    else{
        cout << "It's not!";
    }

    }

