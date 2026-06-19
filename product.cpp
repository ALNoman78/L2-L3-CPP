#include <iostream>
using namespace std;

class Product
{
    string name;
    int quantity;
    double price;

public:
    void ProductInventory(string name, int quantity, double price){
        this->name = name;
        this->quantity = quantity;
        this->price = price;
    }

    double productValue(){
        return quantity * price;
    }

     void showProduct(){
        cout << "Name: " << name << "\n"
             << "Quantity: " << quantity << "\n"
             << "Price: " << price << "\n"
             << "Product value: " << productValue() << endl;
    }
};

int main(){
    Product p[10];

    string name;
    int quantity;
    double price;

    double totalValue = 0;
    int maxIndex = 0;
    double maxValue = 0;

    for (int i = 0; i < 10; i++){
        cout << "Enter product name, quantity, price for product " << i + 1 << endl;
        cin >> name >> quantity >> price;

        p[i].ProductInventory(name, quantity, price);
    }

    maxValue = p[0].productValue();

    for (int i = 0; i < 10; i++){
        double v = p[i].productValue();

        p[i].showProduct();

        totalValue += v;

        if (v > maxValue){
            maxValue = v;
            maxIndex = i;
        }
    }

    cout << "Product with Maximum Value:" << endl;
    p[maxIndex].showProduct();

    return 0;
}