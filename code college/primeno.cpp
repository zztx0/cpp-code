#include <iostream>

using namespace std;

int main(){
    int x,pm=0;
    cout <<"Enter a Number here!\n";
    cin >> x;
    for(int i=0;i<=x;i++){
        if(x%i==0){

            pm++;
    }
    if(pm==2){
        cout << "iTS prIME!";
    }
    else{
        cout << "iTS ISTENT";
    }
    }

}