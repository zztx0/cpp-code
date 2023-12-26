#include <iostream>

using namespace std;

int main(){
    int m,km,x;
    cout << "For Meter to Km enter 0\n";
    cout << "-------------------------\n";
    cout << "For KM to Meter enter 1\n";

    cin >> x;

    if(x==0){
        cout << "Meter ---> ";
        cin >> m;
        km=m/1000 ;
        cout << "km --" <<km ;
    }
    else{
        cout << "Km ---> ";
        cin >> km;
        m=km*1000;
        cout << "Meter --" <<m;

}

}