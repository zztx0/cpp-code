#include <iostream>

using namespace std;

class myclass {
    public:

       string name;
         int age;
};

int  main(){

    myclass vishu;
    vishu.name = "Vishvdeep Rajurkar";
    vishu.age = 18;

    myclass yash;
    yash.name = "Yash Kumar";
    yash.age  = 17 ;

    myclass java;
    java.name = "Java";
    java.age  = 17;


    cout <<  vishu.name << "  " << vishu.age;
    cout << endl;
    cout <<  yash.name << "  " << yash.age;
    cout << endl;
    cout << java.name << "  " << java.age;

}
