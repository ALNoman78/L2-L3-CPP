#include <iostream>
using namespace std;

class Account{
    int account_Number;
    double balance;

public:

    void accountDetails(int accountNumber, double balance){
        this->account_Number = accountNumber;
        this->balance = balance;
    }

    void showData(){
        cout << "Account Number: " << account_Number
             << " Balance: " << balance << endl;
    }

    double getBalance(){
        return balance;
    }
};

int main(){
    Account a[3];

    int accNo;
    double bal;

    for(int i = 0; i < 3; i++){
        cout << "Enter account number and balance for account " << i + 1 << endl;
        cin >> accNo >> bal;

        a[i].accountDetails(accNo, bal);
    }

    for(int i = 0; i < 3; i++){
        if(a[i].getBalance() < 1000){
            a[i].showData();
        }
    }

    return 0;
}