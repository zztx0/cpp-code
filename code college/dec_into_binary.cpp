#include <iostream>

using namespace std;

int main(){

int x,rem;

cin >> x;
int a[32];
int i=0;
while(x>0){

    a[i] = x%2;
    x=x/2;
    i++;
}

for(int j=i-1;j>=0;j--){
    cout << a[j];
}

}