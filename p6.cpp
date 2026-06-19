#include <iostream>
using namespace std;

class Distance{
    public:
    double value;

    Distance(){
        value = 0;
    }

    void input(){
        cout << "Enter Distance: ";
        cin >> value;
    }

    void Display(){
        cout << value << endl;
    }
};

int main(){
    Distance d[2];
    double sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Distance " << i + 1 << endl;
        d[i].input();
    }

    for (int i = 0; i < 5; i++) {
        d[i].Display();
        sum += d[i].value;
    }

    cout << "\nTotal Sum = " << sum << endl;
    return 0;
}