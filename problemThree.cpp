#include <iostream>
#include <cmath>
using namespace std;

class Point2D{
    double x, y;

    public:
    Point2D( double x, double y){
        this->x = x;
        this->y = y;
    }

    void Display(){
        cout << "x = " << x << " Y = " << y << endl;
    }

    friend double calculateDistance(Point2D a, Point2D b);
};

double calculateDistance(Point2D a,Point2D b){
    double dx = a.x - b.x;
    double dy = a.y - b.y;

    return sqrt(dx * dx + dy * dy);
}

int main(){
    Point2D p1(1,2), p2(2, 5);

    p1.Display();
    p2.Display();

    cout << "Distance = " << calculateDistance(p1, p2) << endl;

    return 0;
}