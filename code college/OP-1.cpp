#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main(){

int i,k,x,m,l;
cin >> x;
for(;;){
for(i=1;i<=x;i++){
        for (k=x;k>=i;k--){
         cout << "*  ";
         
        }
        Sleep(1000);
     cout << "\n";
    }
    Sleep(10);
    system("cls");
    for(m=1;m<=x;m++){
        for(l=1;l<=m;l++){
            cout<< "*  ";
            
        }
        Sleep(1000);
    cout << "\n";
    }
    Sleep(10);
    system("cls");
}
return 0;
}



