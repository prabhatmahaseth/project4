#include<iostream>
using namespace std;

int main() {
    int choice;
    float temp, convertedTemp;

    cout << "Choose an option:" << endl;
    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            convertedTemp = (temp * 9/5) + 32;
            cout << "Temperature in Fahrenheit: " << convertedTemp << endl;
            break;

        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            convertedTemp = (temp - 32) * 5/9;
            cout << "Temperature in Celsius: " << convertedTemp << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}