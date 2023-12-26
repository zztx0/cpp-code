#include <iostream>
using namespace std;

int sum(const int &n){
if(n>0){
int z = n + sum(n-1);
return z;
}
else{
    return 0;
}

}

int main(){
    
    int x;
    cin >> x;

cout << sum(x);
}