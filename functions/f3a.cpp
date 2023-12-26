#include <iostream>
using namespace std;


int arryprt(int &x,int a[]){

    for(int i=0;i<x;i++){
        cout << a[i];
    }

}

int main(){

int n;
cin >> n;
int a[n];



for(int i=0; i<n;i++){

    cin >> a[i];

}

arryprt(n,a);

}