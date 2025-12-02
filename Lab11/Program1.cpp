#include <iostream>
using namespace std;

class BankAccount {
    private: 
        double Balance;
        int Pin;
        bool validatePin (int inputtedPin) {
            
            return (inputtedPin == Pin);
        }
    public:
        BankAccount(double initialBalance, int value) : Balance(initialBalance), Pin(value) {}

        void withdrawMoney (int pin, double amount) {
            if (validatePin(pin)) {
                if (Balance >= amount) {
                    Balance -= amount;
                    cout << "The amount after being withdrawn is: " << Balance<<endl;
                }
                else {
                    cout << "Operation unsuccessfull. Insufficient Balance" <<endl;
                }
            }
            else {
                cout << "Incorrect Pin" << endl;
            }
        }
        void checkBalance (int pin) {
            if (validatePin(pin)) {
                cout << "The balance is: " << Balance << endl;
            }
            else {
                cout << "Incorrect Pin" << endl;
            } 
        }
};


int main () {
    BankAccount acc1(100000, 12345);
    int pin;
    cout << "Enter your pin: ";
    cin >> pin;

    int choice;
    do {
        cout << endl << "ATM Menu" << endl;
        cout << "1. Withdraw money" << endl;
        cout << "2. Check balance" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                double amount;
                cout << "enter amount: ";
                cin >> amount;
                acc1.withdrawMoney(pin, amount);
                break;
            case 2:
                acc1.checkBalance(pin);
                break;
            case 3:
                cout << "Thank you for using the atm. Goodbye!";
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 3);
    return 0;
}