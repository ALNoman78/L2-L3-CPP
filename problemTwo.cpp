#include <iostream>
#include <string>
using namespace std;

class Student{
    int studentId;

    protected:
    string name;

    public:
    Student(int studentId, string name){
        this->studentId = studentId;
        this->name = name;
    }

    friend class Faculty;
};

class Faculty{
    public: 

    void Display(Student x){
        cout << "Student Id : " << x.studentId << " Name : " << x.name << endl;
    }
};

int main(){
    Student s1( 202321," MR Nothing ");
    Faculty y;

    y.Display(s1);

    return 0;
}