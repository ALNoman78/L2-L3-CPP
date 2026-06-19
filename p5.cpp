#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
        string title;
        float price;
};

int main(){
    Book b[5];

    for(int i = 0; i < 5; i++){
        cout << "Enter details for book " << i + 1 << endl;

        cout << " Title ";
        cin >> b[i].title;

        cout << " Price ";
        cin >> b[i].price;
    }

    for(int i = 0; i < 5; i++){
        cout << "Book " << i + 1 << endl;
        cout << " Title: " << b[i].title << " Price: " << b[i].price << endl;
    }

    int index = 0;

    for (int i = 1; i < 5; i++){
        if (b[i].price > b[index].price){
            index = i;
        }
    }
        
    cout << "Most expensive books is = " << "Title: " << b[index].title << "Price: " << b[index].price<< endl;

    return 0;
}