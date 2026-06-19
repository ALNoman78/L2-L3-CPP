#include <iostream>
using namespace std;

class Rectangle{
    int width, length;

    public:
    void areaSetData(int width, int length){
        this->width = width;
        this->length = length ;
    }
    
    int CalculateArea(){
        return width * length;
    }
};

int main(){
    Rectangle r[3];

    int width, length;

    for (int i = 0; i < 3; i++){
        cout << "Enter the width and length of rectangle" << i + 1 << endl;
        cin >> width >> length;

        r[i].areaSetData(width, length);
    };
    
    int maxArea = r[0].CalculateArea();
    int maxIndex = 0;
    
    for (int i = 0; i < 3; i++){
        int area = r[i].CalculateArea();

        cout << "Rectangle " << i + 1 << " Area : " << area << endl;

        if(area > maxArea){
            maxArea = area;
            maxIndex = 1;
        }
    }

    cout << "Rectangle " << maxIndex + 1 << " has the largest area." << endl;
    
    return 0;
}