#include <iostream>

using namespace std;

int main(){

int n,m;
cin >> n >> m;
int a[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

        if(i!=j){

            a[i][j]=0;
            a[j][i]=0;

        }
        else if(i==j){

            a[i][j]=1;

        }

    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout << a[i][j] << " ";
    }
    cout << "\n";
}

}