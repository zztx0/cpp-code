#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int a[n][m];
    for(int i=0;i<n;i++){     // input a 2d array
        for(int j=0;j<m;j++){

            cin >> a[i][j]; // [0][j changes] so this means row filled first the [1][j changes] then second row and so no

        }
    }

    for(int i=0;i<n;i++){   // output a 2d array
        for(int j=0;j<m;j++){
            
            cout << a[i][j] << "  ";

        }
        cout << "\n";
    }

}