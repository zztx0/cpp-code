#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){

    string a,b;
    cout << "Enter String here\n";
    cin >> a >> b;

    //print
    cout << a << endl;
    cout << b;

    // addtion of two string
    cout<< a + b << endl;
    //cout<<a.append(b) << endl;

    //lenght of string
    cout << a.length() << endl ;
    cout << b.length() << endl ;

    //To ACCESS single element of string using index just like arrey
    cout << a[0] << endl;
    cout << b[4] << endl;

    //substr extract part of string sub set kind off
    cout << a.substr(0,3) << endl;
    cout << b.substr(1,2) << endl;

    //ACCESS last character of string 
    cout << a.back() << endl;
    cout << b.back() << endl;

    //to_string to Convert int float into string
    int z = 100;
    cout << to_string(z) + a + b << endl;

    //to GET the size of the storage space currently allocated for the string
    cout << a.capacity() << endl;
    cout << b.capacity() << endl;

    //check wether charecter is aplhabate num sapce





}