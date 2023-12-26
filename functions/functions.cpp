#include <iostream>
using namespace std;

int summ(int &x,int &y);

int main(){
int a,b;
cin >> a>>b;
summ(a,b);

}


summ(int &x,int &y){

   int s = x+y;
   return s;

}