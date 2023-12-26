#include <iostream>

using namespace std;

int main(){
    int i,k,x;
    cin >> x;
    int z='@';
    for(i=0;i<=x;i++){
        for(k=1;k<=i;k++){
        
        int temp = z+k;
        cout << char(temp) << "  ";
        }
        cout << "\n";
    }
}