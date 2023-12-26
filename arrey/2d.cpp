#include <iostream>

using namespace std;

int main(){

    int n ,m;
    cin >>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cin >> a[i][j];

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int q=0;q<n;q++){
                for(int p=0;p<m;p++){

                  if(a[i][j]>a[m][p]){

                    int temp =a[i][j];
                    a[i][j] = a[m][p];
                    a[m][p] = temp ;

                  }
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            cout << a[i][j] << "  ";

        }
        cout << "\n";
    }

}
