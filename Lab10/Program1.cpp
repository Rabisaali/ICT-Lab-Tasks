#include <iostream>
using namespace std;
class Car {
    private:
        int car_number;
        char carmodel [10];
    public: 
        void getdata();
        void showdata();
};

void Car::getdata () {
    cout << "Enter the car number: ";
    cin >> car_number;
    cout << "Enter car model: ";
    cin >> carmodel;
}

void Car::showdata() {
    cout << "Car number is: "<<car_number<<endl;
    cout << "Car model is: "<<carmodel<<endl;
}

int main () {
    Car c1;
    c1.getdata();
    c1.showdata();
}