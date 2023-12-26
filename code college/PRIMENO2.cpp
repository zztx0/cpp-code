#include <iostream>

using namespace std;

int main(void){
    int x,i,j,temp=0;
    cout << "Enter a EndNumber!\n";
    cin >> x ;
    for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            if(i%j==0){
                
                temp++;

            }
        }
        if(temp==2){
            cout << temp;
        }       
    }
}