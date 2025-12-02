#include <iostream>
#include <string>

using namespace std;

class BMI {
    double weight, height, bmi;
    string status;

    public:
        void getinput () {
            cout << "Enter your weight: ";
            cin >> weight;

            if (weight<=0) {
                cout << "invalid weight" << endl;
                return;
            }
            
            cout << "Enter your height: ";
            cin >> height;

            if (height<=0) {
                cout << "invalid height" << endl;
                return;
            }
        }
        double calculateBMI () {
            double heightInMeter = height * 0.0254;

            if (weight>0 && height>0) {
                bmi = weight / (heightInMeter*heightInMeter);
                return bmi;
            }
            return -1;
        }
        string findstatus () {
            if (bmi<=0) status = "Invalid BMI calculation. Check your inputs.";
            else if (bmi < 18.5) status = "Underweight";
            else if (bmi >= 18.5 && bmi < 25.0) status = "Normal weight";
            else if (bmi >= 25.0 && bmi < 30.0) status = "Overweight";
            else status = "Obese";
            return status;
        }

        void printstatus () {
            bmi = calculateBMI();
            if (bmi>0) {
                cout << "Your BMI is " << bmi << endl;
                cout << "Your status is " << findstatus() << endl;
            }
            else {
                cout << "Unable to calculate BMI due to invalid input." << endl;
            }
        }
};

int main () {
    BMI bmi;
    bmi.getinput();
    bmi.printstatus();
}