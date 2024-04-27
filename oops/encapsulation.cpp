#include <iostream>
using namespace std;

class Game{

    private:
        int a = 1;

    protected:
        int b = 2;

    public:
        int c = 3;

};
class Child : public Game{

public:
    Child(){
        //cout << a << endl; Beacuse it private member of main parent class!
        cout << b << endl;
        cout << c << endl;
    }
 };

int main(){

Child a;

}