#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;
int rem,sum = 0,count=0;
while (n!=0)
{
    rem = n%10;
    sum = sum + rem;
    n = n/10;

    count++;
}
cout << sum;
cout << "\n";
cout << count;

}
