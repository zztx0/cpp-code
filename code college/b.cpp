#include <iostream>

using namespace std;

int main(){
int i,j,k,l,m,x;
cin >> x;

for (i=1;i<=x;i++){
    for (k=1;k<=x-i;k++)
    {
        cout << " ";
    }
    for(j=1;j<i*2;j++){
        cout << "*";
    }
    cout << "\n";
}
for(l=1;l<=x;l++){
    for (k=1;k<=l-1;k++)
    {
       cout << " "; 
    }
    for(m=x*2;m>=l*2;m--){
        cout << "*";
    }
    cout << "\n";
}




}