#include <iostream>

using namespace std;

int main(){
int n;

cin >> n;
int a[n];

for(int i=0;i<n;i++){

    cin >> a[i];

}


    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){

            if(a[i]>a[j]){

                int temp = a[i];
                a[i] = a[j];
                a[j] = temp; 

            }

        }
    }

    cout << a[n]; // for min value of an array
    cout << "\n";
    cout << a[0]; // for max value of an array

}