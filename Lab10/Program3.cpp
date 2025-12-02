#include <iostream>
#include <string>
using namespace std;

class Account {
    private:
        double balance;
    public:
        string name;
        long accountNumber;

        void setBalance (double bal) {
            balance = bal;
        } 
        double getBalance () {
            return balance;
        }
        void printDetails () {
            cout << "The name of holder is: " << name;
            cout << "The account number is: " << accountNumber;
            cout << "The account balance is: " << getBalance();
        }
};

int main () {
    Account acc1;
    double bal;
    cout << "Enter the name: ";
    cin >> acc1.name;
    cout << "Enter account number: ";
    cin >> acc1.accountNumber;
    cout << "Enter balance: ";
    cin >> bal;
    acc1.setBalance(bal);
    acc1.printDetails();
}