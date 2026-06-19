#include <iostream>
#include <string>
using namespace std;

class Varsity{
    string name;

    protected:
        string location;

    public:
    Varsity() {
        name = "BRAC University";
        location = "Bangladesh";
    }

    friend class Department;
};

class Department{
    public:
        void Print(Varsity x){
            cout << "Varsity Name :" << x.name << "Location :" << x.location<< endl;
        }
};

int main(){
    Varsity x;
    Department y;

    y.Print(x);

    return 0;
}