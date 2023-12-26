#include <iostream>
using namespace std;

int main(){

int x;
cin >> x;
int bi=1;
int first=0;
int last = x%10;
if(x>10){
for(int i=0;x>10;x=x/10){
bi++;
};
first = x;
};

cout << last << endl;
cout << first << endl;
cout << "sum"<<first + last << endl;
cout << "digit"<<bi << endl;
}
