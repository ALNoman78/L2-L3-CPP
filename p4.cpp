#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    friend void compareAges(Person p1, Person p2);
};

void compareAges(Person p1, Person p2) {
    if (p1.age > p2.age) {
        cout << p1.name << " is older." << endl;
    }
    else if (p2.age > p1.age) {
        cout << p2.name << " is older." << endl;
    }
    else {
        cout << "Both are same age." << endl;
    }
}

int main() {
    Person p1("Noman", 22);
    Person p2("Maisa", 23);

    compareAges(p1, p2);

    return 0;
}